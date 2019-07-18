#include "node.h"

using namespace std;

// nombre_clase::constructor
Node::Node(int _valor)
{
    valor = _valor;
    next  = NULL;  
}

int *Node::get_address()
{
    return &valor;
}
