#include <iostream>
#include <stdlib.h>

#include "node.h"
#include "list.h"

using namespace std;

// _     _       _            _   _     _     _   
//| |   (_)     | |          | | | |   (_)   | |  
//| |    _ _ __ | | _____  __| | | |    _ ___| |_ 
//| |   | | '_ \| |/ / _ \/ _` | | |   | / __| __|
//| |___| | | | |   <  __/ (_| | | |___| \__ \ |_ 
//\_____/_|_| |_|_|\_\___|\__,_| \_____/_|___/\__|


int program_menu(List *my_list)
{

    int option;
    int valor;
    cout << "\n>_ ";
    cin >> option;

    switch (option) {
        case 1:

            cout << "Insert Value: ";
            cin >> valor;

            my_list->insertBegin(valor);
            return option;

        case 2:

            cout << "Insert Value: ";
            cin >> valor;

            my_list->insertEnd(valor);
            return option;

        case 3:
            my_list->deleteBegin();
            return option;

        case 4:
            my_list->deleteEnd();
            return option;

        case 5:
            my_list->insertElement();
            return option;

        case 6:
            my_list->deleteElement();
            return option;

        case 7:
            
            return option;

        case 8:
            
            cout << "\n--> Random values inserted." << endl;
            
            /* Create a List with random values */
            for (int i = 0; i < 5; i++) {
                int rnd_number = rand() % 10 + 1;

                my_list->insertEnd(rnd_number);
            }

            return option;

        case 0:

            return 0;

        default:
            cout << "No option chosen." << endl;
    }
}


main() /* Main program */
{
    cout << " _     _       _            _   _     _     _   " << endl;
    cout << "| |   (_)     | |          | | | |   (_)   | |  " << endl;
    cout << "| |    _ _ __ | | _____  __| | | |    _ ___| |_ " << endl;
    cout << "| |   | | '_ \\| |/ / _ \\/ _` | | |   | / __| __|" << endl;
    cout << "| |___| | | | |   <  __/ (_| | | |___| \\__ \\ |_ " << endl;
    cout << "\\_____/_|_| |_|_|\\_\\___|\\__,_| \\_____/_|___/\\__|\n" << endl;

    cout << "╔═══ PROGRAM MENU ══════════════════════════════╗" << endl;
    cout << "║      1: Insert at the beginning.              ║" << endl;
    cout << "║      2: Insert at the end.                    ║" << endl;
    cout << "║      3: Delete element at the beginning.      ║" << endl;
    cout << "║      4: Delete element at the end.            ║" << endl;
    cout << "║      5: Insert in position                    ║" << endl;
    cout << "║      6: Delete in position.                   ║" << endl;
    cout << "║      7: Print List.                           ║" << endl;
    cout << "║      8: Insert random numbers in the list.    ║" << endl;
    cout << "║      0: Exit.                                 ║" << endl;
    cout << "╚═══════════════════════════════════════════════╝" << endl;


    /* The empty list is created */
    List* my_list = new List();

    int option = 0;
    do
    {
        option = program_menu(my_list);
        if (option != 0) {
            my_list->print_simple_list();
        }

    } while (option != 0);

    return 0;
}