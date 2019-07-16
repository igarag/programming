#include <iostream>
#include <stdlib.h>
#include <string>

// 
#ifndef NODE_H
#define NODE_H

using namespace std;

class Node 
{
    /* -------------------------------------- */
    /* TODO: Cambiar la visibilidad a private */
    /* -------------------------------------- */
    public:
        int valor;
        int* next;

    public:
        /* Constructor */
        Node(int _valor);

        int* get_address();

};
#endif
