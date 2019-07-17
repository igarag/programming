#include "list.h"

using namespace std;


/* Constructor */
List::List()
{

    p_inicio  = NULL;
    p_final   = NULL;
    //p_final   = p_inicio;
    list_size = 0;

    cout << "\np_inicio: " << p_inicio << " - p_final: " << p_final << endl;

    //List::print_list(p_inicio, p_final, list_size);
}


void List::recorrer()
{
    Node* prev = p_inicio;
    
    while (prev->next != NULL)
    {
        cout << prev->valor << endl;
    }
    
    cout << "La lista empieza en: " << p_inicio->next << endl;

}

void List::get()
{
    cout << "\nEstoy en get:" << endl;
}

void List::insert(int valor_)
{
    cout << "\nInsertando ... ... un: " << valor_ << endl;

    /* Crear un nodo */
    Node* node = new Node(valor_);

    if (list_size == 0){
        
        p_inicio = node;
        p_final  = node;

        cout << "p_inicio en la primera vuelta es: " << p_inicio << endl;
        cout << "p_final en la primera vuelta es: " << p_final << endl;
        cout << "valor_ en la primera vuelta es: " << valor_ << endl;
        cout << "Dirección de memoria del puntero a siguiente: " << node->valor << endl;
        cout << "\n" << endl;

        //recorrer();
    } else {
        
        p_final->next = node;
        p_final = node;
        
    }
    cout << "Incrementando el contador de la lista: " << list_size << endl;

    print_list();

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
        cout << " ║ " << element->valor << " ║ " << element->next << " ║  <-- Elemento: " << i << endl;
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
    cout << "             ╚═════════╗\n                     ══╩══\n                      ═══\n                       ═" << endl;
}

/*
void List::set(int a, int b)
{
    p_inicio = a;
    p_final  = b;
}
*/
