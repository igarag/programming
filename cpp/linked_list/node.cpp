#include "node.h"

using namespace std;

// nombre_clase::constructor
Node::Node(int _value)
{
    value = _value;
    next  = NULL;  
}

int *Node::get_address()
{
    return &value;
}
