
#include <iostream>
#include <stdlib.h>
#include <string>

#include "node.h"

// Lo que hace ifndef es no volver a instanciar esta clase
// si ya lo ha hecho otra parte del programa.
#ifndef LIST_H
#define LIST_H


class List /* Clase Lista */
{
    private:
        Node* p_inicio;
        Node* p_final;
        int list_size;


    public: // Métodos
        // Constructor. Inicializa los atributos de la clase.
        List();
    
        void recorrer();

        void get();
    
        void set(int a, int b);

        void insert(int valor_);

        void print_list(int valor, int *next, int list_size);
};

#endif
