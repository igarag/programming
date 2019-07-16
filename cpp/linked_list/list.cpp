#include "list.h"

using namespace std;


/* Constructor */
List::List()
{

    p_inicio = NULL;
    p_final = p_inicio;
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
    //cout << "p_inicio es: " << &p_inicio << ". p_final es: " << &p_final << endl;
}

void List::insert(int valor_)
{
    cout << "\nInsertando ... ... un: " << valor_ << endl;

    /* Crear un nodo */
    Node* node = new Node(valor_);

    if (list_size == 0){
        
        p_inicio = node;

        cout << "p_inicio en la primera vuelta es: " << p_inicio << endl;
        cout << "p_final en la primera vuelta es: " << p_final << endl;
        cout << "valor_ en la primera vuelta es: " << valor_ << endl;
        cout << "Dirección de memoria del puntero a siguiente: " << node->valor << endl;
        cout << "\n" << endl;

        //recorrer();
    } else {

    }
    list_size += 1;





    List::print_list(node->valor, node->next, list_size);




    //p_inicio apunta a....
    //p_final = &p_inicio; 
    //p_final apunta a....

}

void List::print_list(int valor, int* next, int list_size)
{
    cout << " ╔════════════════╗ ╔>" << endl;
    cout << " ║       " << valor << "        ║ ║" << endl;
    cout << " ╠════════════════╣ ║" << endl;
    if (list_size != 0){
        cout << " ║       " << next << "        ╠═╝" << endl;
    } else {
        cout << " ║ " << next << " ╠═╝" << endl;
    }
    cout << " ╚════════════════╝" << endl;
}

/*
void List::set(int a, int b)
{
    p_inicio = a;
    p_final  = b;
}
*/
