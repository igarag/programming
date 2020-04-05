
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
        Node* p_start;
        Node* p_end;
        int list_size;


    public: // Métodos

        List(); // Constructor. Inicializa los atributos de la clase.


        void set(int , int);

        void insertBegin(int);
        void insertEnd(int);
        void insertElement();

        void deleteBegin();
        void deleteEnd();
        void deleteElement();

        tuple<int, int> insertValueInPosition();
        int deleteValueInPosition();
        void print_simple_list();
        void print_list();
        //void findElement(Node **, Node **, int);

};
