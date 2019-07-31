#include <iostream>
#include <stdlib.h>

#include "node.h"
#include "list.h"

using namespace std;

//     __ _     _                     _                    _
//    / /(_)___| |_ __ _    ___ _ __ | | __ _ ______ _  __| | __ _
//   / / | / __| __/ _` |  / _ \ '_ \| |/ _` |_  / _` |/ _` |/ _` |
//  / /__| \__ \ || (_| | |  __/ | | | | (_| |/ / (_| | (_| | (_| |
//  \____/_|___/\__\__,_|  \___|_| |_|_|\__,_/___\__,_|\__,_|\__,_|
//

int program_menu(List *my_list, string lan)
{
    if (lan == "es"){
        cout << "==== SELECCIONE UNA OPCIÓN ===============================\n"
            << endl;
        cout << "\t1: Insertar al principio." << endl;
        cout << "\t2: Insertar al final." << endl;
        cout << "\t3: Eliminar elemento del principio." << endl;
        cout << "\t4: Eliminar elemento del final." << endl;
        cout << "\t5: Insertar en posición." << endl;
        cout << "\t6: Eliminar en posición." << endl;
        cout << "\t7: Imprimir la lista." << endl;
        cout << "\t8: Introducir elementos aleatorios en la lista." << endl;
        cout << "\t9: Cambiar de idioma." << endl;
        cout << "\t0: Salir." << endl;
        cout << "\n==========================================================" << endl;
    } else if (lan == "en") {
        cout << "==== CHOOSE AN OPTION ====================================\n" << endl;
        cout << "\t1: Insert at the beginning." << endl;
        cout << "\t2: Insert at the end." << endl;
        cout << "\t3: Delete element at the beginning." << endl;
        cout << "\t4: Delete element at the end." << endl;
        cout << "\t5: Insert in position" << endl;
        cout << "\t6: Delete in position." << endl;
        cout << "\t7: Print List." << endl;
        cout << "\t8: Insert random numbers in the list." << endl;
        cout << "\t9: Change language." << endl;
        cout << "\t0: Exit." << endl;
        cout << "\n==========================================================" << endl;
    } else{
        cout << "Invalid Language" << endl;
    }

    int option;
    int valor;
    cout << "\n>_ ";
    cin >> option;

    switch (option) {
        case 1:
            if (lan == "es"){
                cout << "Inserte un valor: ";
            } else if (lan == "en") {
                cout << "Insert Value: ";
            } else {
                cout << "Invalid language" << endl;
            }
            cin >> valor;

            my_list->insertBegin(valor);
            return option;

        case 2:
            if (lan == "es")
            {
                cout << "Inserte un valor: ";
            }
            else if (lan == "en")
            {
                cout << "Insert Value: ";
            } else {
                cout << "Invalid language" << endl;
            }
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
            if (lan == "es")
            {
                cout << "\n--> Introducido un conjunto de números aleatorios\n\n" << endl;
                
            }
            else if (lan == "en")
            {
                cout << "\n--> Random values inserted\n\n" << endl;
            } else {
                cout << "Invalid language" << endl;
            }
            
            /* Crear una lista aleatoria */
            for (int i = 0; i < 5; i++) {
                int rnd_number = rand() % 10 + 1;

                my_list->insertEnd(rnd_number);
            }
            return option;

        case 9:
            if (lan == "es")
            {
                cout << "\n--> Elige un idioma (es o en): \n\n" << endl;

                cin >> lan;

                cout << "  _     _       _            _   _     _     _   " << endl;
                cout << " | |   (_)_ __ | | _____  __| | | |   (_)___| |_ " << endl;
                cout << " | |   | | '_ \\| |/ / _ \\/ _` | | |   | / __| __|" << endl;
                cout << " | |___| | | | |   <  __/ (_| | | |___| \\__ \\ |_ " << endl;
                cout << " |_____|_|_| |_|_|\\_\\___|\\__,_| |_____|_|___/\\__|" << endl;
                cout << "" << endl;
            }
            else if (lan == "en")
            {
                cout << "\n--> Choose a language(es or en): \n\n" << endl;

                cin >> lan;

                cout << "   __ _     _                     _                    _" << endl;
                cout << "  / /(_)___| |_ __ _    ___ _ __ | | __ _ ______ _  __| | __ _" << endl;
                cout << " / / | / __| __/ _` |  / _ \\ '_ \\| |/ _` |_  / _` |/ _` |/ _` |" << endl;
                cout << "/ /__| \\__ \\ || (_| | |  __/ | | | | (_| |/ / (_| | (_| | (_| |" << endl;
                cout << "\\____/_|___/\\__\\__,_|  \\___|_| |_|_|\\__,_/___\\__,_|\\__,_|\\__,_|" << endl;
                cout << "---------------------------------------------------------------" << endl;
                cout << "" << endl;
                
            } else {
                cout << "Invalid language" << endl;
            }

            return option;

        case 0:

            return 0;

        default:
            cout << "No se ha elegido opción." << endl;
    }
}

main() /* Main program */
{
    cout << "  _     _       _            _   _     _     _   " << endl;
    cout << " | |   (_)_ __ | | _____  __| | | |   (_)___| |_ " << endl;
    cout << " | |   | | '_ \\| |/ / _ \\/ _` | | |   | / __| __|" << endl;
    cout << " | |___| | | | |   <  __/ (_| | | |___| \\__ \\ |_ " << endl;
    cout << " |_____|_|_| |_|_|\\_\\___|\\__,_| |_____|_|___/\\__|" << endl;
    cout << "" << endl;

    string lan = "en";

    /* Se crea la lista */
    List* my_list = new List();


    int option = 0;
    do
    {
        option = program_menu(my_list, lan);
        if (option != 0) {
            my_list->print_simple_list();
        }

    } while (option != 0);

    return 0;
}