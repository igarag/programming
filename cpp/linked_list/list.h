
#include <iostream>
#include <stdlib.h>
#include <string>
#include <tuple>

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

        List(); // Constructor. Inicializa los atributos de la clase.

        void recorrer();

        void get();
    
        void set(int , int);

        void insertBegin(int);
        void insertEnd(int);

        void deleteBegin();
        void deleteEnd();

        void insertPosition();

        tuple<int, int> insertValuesInPosition();
        void print_list();

        Node get_list_position(int);
};

#endif
