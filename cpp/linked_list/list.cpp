#include <iostream>
#include <stdlib.h>

#include "list.h"
#include "node.h"

using namespace std;


/* Constructor */
List::List()
{
    p_inicio = NULL;
    p_final = p_inicio;
    cout << "p_inicio: " << &p_inicio << " - p_final: " << &p_final << endl;
}


void List::insertar()
{
    cout << "Estoy insertando." << endl;
}

void List::recorrer()
{
    cout << "Estoy recorriendo." << endl;
}

void List::get()
{
    cout << "Estoy en get:" << endl;
    cout << "p_inicio es: " << &p_inicio << ". p_final es: " << &p_final << endl;
}

void List::insert(int valor_)
{
    cout << "\nInsertando ... ... un: " << valor_ << endl;
    
    //Se crea un nodo

    /* Crear un nodo */
    Node* node = new Node(valor_);
    node->print_list();

    //p_inicio apunta a....
    //p_final = &p_inicio; 
    //p_final apunta a....

}

/*
void List::set(int a, int b)
{
    p_inicio = a;
    p_final  = b;
}
*/
