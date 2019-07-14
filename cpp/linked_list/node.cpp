#include <iostream>
#include <stdlib.h>

#include "node.h"

using namespace std;


// nombre_clase::constructor
Node::Node(int _valor)
{
    valor = _valor;
    //next  = NULL;
}

void Node::get()
{
    cout << "HOLAAAA, soy un nodo" << endl;
}