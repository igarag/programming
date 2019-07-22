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


void List::insertPosition()
{
    int value = 0;
    int position = 0;

    tie(value, position) = insertValuesInPosition();

    cout << "Valor y posición de entrada: ";
    cout << value << "|"  << position << endl;

    Node *node = p_inicio;
    Node *p_aux = NULL;

    /* Insertar en la posición */
    for (int i = 0; i <= position; i++)
    {
        if (node->next != NULL){
            p_aux = node;
            node = node->next;
        } else if (node->next == NULL) {
            break;
        } else {
            break;
        }
    }
    node->valor = value;
    node->next = p_aux->next;
    
    p_aux->next = node;
    
}




/* ==================== */
/* Funciones auxiliares */
/* ==================== */
tuple<int, int>List::insertValuesInPosition()
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

