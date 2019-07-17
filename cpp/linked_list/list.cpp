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

    if (list_size == 0){

        p_inicio = node;
        p_final  = node;

    } else {
        p_final->next = node;
        p_final = node;   
    }
    list_size += 1;
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

