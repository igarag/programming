#include "list.h"

using namespace std;



/* Constructor */
List::List()
{

    p_inicio  = NULL;
    p_final   = NULL;
    list_size = 0;

    cout << "\np_inicio: " << p_inicio << " - p_final: " << p_final << endl;
}


void List::recorrer()
{
    Node* prev = p_inicio;
    
    while (prev->next != NULL)
    {
        cout << prev->valor << endl;
    }    
}


void List::get()
{
    cout << "\nEstoy en get:" << endl;
}


void List::insertEnd(int valor_)
{
    /* Crear un nodo */
    Node* node = new Node(valor_);

    if (list_size == 0) {
        p_inicio = node;
        p_final  = node;
    } else {
        p_final->next = node;
        p_final = node;   
    }
    list_size += 1;
}


void List::insertBegin(int valor)
{
    /* Crear un nodo */
    Node* node = new Node(valor);

    if (list_size == 0) {
        p_inicio = node;
        p_final = node;
    } else {
        node->next = p_inicio;
        p_inicio = node;
        //p_final->next = node;
        //p_final = node;
    }
    list_size += 1;
}



void List::deleteBegin()
{
    /* Elimina el primer elemento de la lista y asigna p_inicio al segundo */

    
    Node* deleteElement = p_inicio;
    p_inicio = p_inicio->next;

    cout << "\n\n===================\nEliminando Nodo ...\n==================="
         << endl;
    /* Liberar memoria */
    free(deleteElement);
}


void List::deleteEnd()
{
    /* Elimina el último elemento de la lista y asigna p_inicio al segundo */

    Node *node = p_inicio;
    node = p_inicio->next;
    Node *p_aux = NULL;

    while (node->next != NULL)
    {
        p_aux = node;
        node  = node->next;
    }
    p_aux->next = NULL;
    p_final = p_aux;

    cout << "\n\n================================" << endl;
    cout << "Eliminando Nodo por el FINAL ..."<< endl;
    cout << "================================" << endl;

    /* Liberar memoria */
    free(node);
}


void List::deleteElement()
{
    /* Punteros de búsqueda */
    Node *p_current = p_inicio;
    Node *p_prev = NULL;

    int position = 0;
    position = deleteValueInPosition();

    if (position == 0)
    {
        deleteBegin();
    }
    else if (position == list_size)
    {
        deleteEnd();
    }
    else if (position > 0 && position < list_size)
    {
        /* TODO: Pasar por referencia p_current y p_prev para sacar
        esto a una función */


        /* Insertar en la posición */
        for (int i = 0; i < position; i++)
        {
            if (p_current->next != NULL)
            {
                p_prev = p_current;
                p_current = p_current->next;
            } else {
                break;
            }
        }
        p_prev->next = p_current->next;
        /* Incremento del número de elementos de la lista */
        list_size -= 1;
        /* Liberar memoria */
        free(p_current);
    }
}


void List::insertPosition()
{
    int value = 0;
    int position = 0;

    tie(value, position) = insertValueInPosition();

    cout << "Valor y posición de entrada: ";
    cout << value << "|"  << position << endl;

    /* Es necesario inicializarlo a algo != NULL, por ejemplo p_inicio */
    Node *new_node = new Node(value);

    /* Punteros de búsqueda */
    Node *p_current = p_inicio;
    Node *p_prev = NULL;

    /* Si el valor a insertar es 0 o el tamaño de la lista, se 
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
        cout << "\n\tInvalid position value. It is greater than the list.\n" << endl;
    }
}




/* ==================== */ 
/* Funciones auxiliares */
/* ==================== */
tuple<int, int>List::insertValueInPosition()
{
    /* Asks to the user a value and position to store in the list */
    int value = 0;
    int position = 0;

    cout << "\nIntroduce el valor: ";
    cin >> value;
    cout << endl;

    cout << "Introduce una posición: ";
    cin >> position;
    cout << endl;

    return make_tuple(value, position);
}


int List::deleteValueInPosition()
{
    /* Asks to the user a position to delete in the list */
    int position = 0;

    cout << "Introduce una posición: ";
    cin >> position;
    cout << endl;

    return position;
}

void List::print_simple_list()
{
    Node *element = p_inicio;
    int i = 1;

    cout << "\nSimple list\n----------" << endl;

    while (element->next != NULL)
    {
        cout << element->valor << " -> ";
        element = element->next;
        i += 1;
    }
    cout << element->valor << "\n" << endl;
}


void List::print_list()
{
    Node* element = p_inicio;
    int i = 1;

    cout << " \n\n  p_inicio\n     ║" << endl;

    while (element->next != NULL)
    {
        
        cout << " ╔═══╬════════════════╗" << endl;
        cout << " ║ " << element->valor << " ║ " << element->next 
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
    cout << " ║ " << element->valor << " ║      NULL      ║  <-- Elemento: " << i << endl;
        cout
         << " ╚═══╩═══════╦════════╝\n             ║" << endl;
        cout << "             ╚═════════╗\n\t\t     ══╩══\n\t\t      ═══\n\t\t       ═" << endl;
}


Node List::get_list_position(int valor_a_eliminar)
{
    cout << "Test" << endl;
}

