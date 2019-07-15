#include <iostream>
#include <stdlib.h>

#include "node.h"
#include "list.h"

using namespace std;



main() /* Main program */
{
    /* Se crea la lista */
    List* my_list = new List();

    my_list->insertar();
    my_list->recorrer();
    my_list->get();
    //my_list->set(3, 6);


    /*
    cout << "Inserte un número: " << endl;
    int valor_insertar;
    cin >> valor_insertar;
    */
    
    /* Insertar un nodo */
    my_list->insert(5);

    return 0;

}