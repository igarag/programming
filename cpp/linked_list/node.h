#include <iostream>
#include <stdlib.h>
#include <string>

#ifndef NODE_H
#define NODE_H

using namespace std;


class Node 
{
    private:
        int valor;
        //int* next;

    public:
        /* Constructor */
        Node(int _valor);

        void get();
};

#endif
