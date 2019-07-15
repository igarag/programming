#include <iostream>
#include <stdlib.h>

#include "node.h"

using namespace std;

// nombre_clase::constructor
Node::Node(int _valor)
{
    valor = _valor;
    next  = NULL;
}

void Node::print_list()
{
    cout << "\n\nLista enlazada:\n═══════════════" << endl;
    cout << " ╔═══╗ ╔>" << endl;
    cout << " ║ " << valor << " ║ ║" << endl;
    cout << " ╠═══╣ ║" << endl;
    cout << " ║ " << next << " ╠═╝" << endl;
    cout << " ╚═══╝" << endl;
}

