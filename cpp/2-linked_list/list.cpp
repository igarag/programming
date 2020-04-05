#include "list.h"

using namespace std;



/* Constructor */
List::List()
{
    p_start  = NULL;
    p_end   = NULL;
    list_size = 0;   
}


void List::insertEnd(int value_)
{
    /* Creates a node */
    Node* node = new Node(value_);

    if (list_size == 0) {
        p_start = node;
        p_end  = node;
    } else {
        p_end->next = node;
        p_end = node;   
    }
    list_size += 1;
}


void List::insertBegin(int value)
{
    /* Creates a node */
    Node* node = new Node(value);

    if (list_size == 0) {
        p_start = node;
        p_end = node;
    } else {
        node->next = p_start;
        p_start = node;
        //p_end->next = node;
        //p_end = node;
    }
    list_size += 1;
    
    cout << "\n\t -> Value inserted! <- \n" << endl;
}


void List::deleteBegin()
{
    /* Deletes the first element of the list and assign p_start at the second one. */
    cout << "\n\t --> Deleting node at the beginning ...\n\n\n"
         << endl;

    Node *p_current = p_start;
    
    list_size -= 1;

    if (list_size < 0){
        
        list_size += 1;

    } else if (list_size == 0){

        p_start = NULL;
        p_end  = NULL;

    } else if (list_size == 1){

        p_start = p_end;        
        p_start->next = NULL;

    } else if (list_size > 1) {

        p_start = p_start->next;

    }
    /* Free memory */
    free(p_current);
}


void List::deleteEnd()
{
    /* Deletes the last element at the list and assign p_begin to the second one. */
    cout << "\n\t --> Deleting node at the end ...\n\n\n" << endl;

    Node *p_current = p_start;
    Node *p_prev = NULL;

    list_size -= 1;

    if (list_size < 0) {

        list_size += 1;

    } else if (list_size == 0) {

        p_start = NULL;
        p_end = NULL;
    
    } else if (list_size == 1) {

        p_current = p_start->next;
        p_current = NULL;
        p_start->next = NULL;
        p_end = p_start;

    } else if (list_size > 1) {
        p_current = p_start->next;
        while (p_current->next != NULL)
        {
            p_prev    = p_current;
            p_current = p_current->next;
        }
        p_prev->next = NULL;
        p_end = p_prev;
    }
    /* Free memory */
    //free(p_prev);
    free(p_current);
}


void List::deleteElement()
{
    /* Punteros de búsqueda */
    Node *p_current = p_start;
    Node *p_prev = NULL;

    int position = 0;
    position = deleteValueInPosition();

    if (position == 0) {
        deleteBegin();
    } else if (position == list_size) {
        deleteEnd();
    } else if (position > 0 && position < list_size) {
        /* Bucle en la función de findElement */
        for (int i = 0; i < position; i++)
        {
            if (p_current->next != NULL) {
                p_prev = p_current;
                p_current = p_current->next;
            } else {
                break;
            }
        }
        /* Insertar en la posición */
        p_prev->next = p_current->next;
        /* Incremento del número de elementos de la lista */
        list_size -= 1;
        /* Liberar memoria */
        free(p_current);
    }
}


void List::insertElement()
{
    int value = 0;
    int position = 0;

    tie(value, position) = insertValueInPosition();

    cout << "Input value and position: ";
    cout << value << "|"  << position << endl;

    /* Es necesario inicializarlo a algo != NULL, por ejemplo p_start */
    Node *new_node = new Node(value);

    /* Punteros de búsqueda */
    Node *p_current = p_start;
    Node *p_prev = NULL;

    /* Si el value a insertar es 0 o el tamaño de la lista, se 
    llama a los métodos creados anteriormente. */
    if ( position == 0) {
        insertBegin(value);

    } else if (position == list_size) {
        insertEnd(value);

    } else if (position > 0 && position < list_size) {
        /* Insertar en la posición */
        for (int i = 0; i < position; i++)
        {
            if (p_current->next != NULL) {
                p_prev = p_current;
                p_current = p_current->next;
            } else {
                break;
            }
        }
        /* Incremento del número de elementos de la lista */
        list_size += 1;

        /* Insertar en la lista. Actualización de los punteros */
        p_prev->next = new_node;
        new_node->next = p_current;

    } else {
        cout << "\n>> Invalid position value. It is greater than the list. <<\n" << endl;
    }
}




/* ==================== */ 
/*    Aux Functions */
/* ==================== */

tuple<int, int>List::insertValueInPosition()
{
    /* Asks to the user a value and position to store in the list */
    int value = 0;
    int position = 0;

    cout << "\nType a value: ";
    cin >> value;

    cout << "Type a position: ";
    cin >> position;

    return make_tuple(value, position);
}


int List::deleteValueInPosition()
{
    /* Asks to the user a position to delete in the list */
    int position = 0;

    cout << "Type a position: ";
    cin >> position;
    cout << endl;

    return position;
}


void List::print_simple_list()
{
    Node *element = p_start;
    int i = 1;

    cout << "\n\nList Items (" << list_size << ")"
         << "\n══════════════\n" << endl;

    if (list_size > 1){
        
        while (element->next != NULL)
        {
            cout << element->value << " -> ";
            element = element->next;
            i += 1;
        }
        cout << element->value << "\n" << endl;

    } else if (list_size == 1) {

        cout << element->value << "\n" << endl;

    } else if (list_size <= 0){
        cout << "Empty list!!!\n\n" << endl;
    }
}


void List::print_list()
{
    Node* element = p_start;
    int i = 1;

    cout << " \n\n  p_start\n     ║" << endl;

    while (element->next != NULL)
    {
        
        cout << " ╔═══╬════════════════╗" << endl;
        cout << " ║ " << element->value << " ║ " << element->next 
             << " ║  <-- Elemento: " << i << endl;
        cout << " ╚═══╩═══════╦════════╝" << endl;
        if (list_size == 0)
        {
            cout << element->next << "             ╠═╝" << endl;
        }
        cout << "     ╔═══════╝" << endl;

        element = element->next;
        i += 1;
    }
    cout << " ╔═══╬════════════════╗" << endl;
    cout << " ║ " << element->value << " ║      NULL      ║  <-- Elemento: " << i << endl;
        cout
         << " ╚═══╩═══════╦════════╝\n             ║" << endl;
        cout << "             ╚═════════╗\n\t\t     ══╩══\n\t\t      ═══\n\t\t       ═" << endl;
}