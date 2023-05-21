#include <iostream>
#include "menu.h"

using namespace std;

//Function that avoid user to pick the option chosen for the main menu

void MainMenu(int option)
{
    int input;

    while (input != 3)
    {
        if (option == 1)
        {
            while (input != 11)
            {
                ShowMenu();
                cout << "Ingrese su opción: ";
                cin >> input;
                SecondMenu(input);
            }
            MainMenuText();
        }
        else if (option == 2)
        {
            while (input != 11)
            {
                ShowMenu();
                cout << "Ingrese su opción: ";
                cin >> input;
                SecondMenu(input);
            }
            MainMenuText();
        }
        else if (option == 3)
        {
            cout << "\nCerrando programa...\n\n";
            exit(0);
        }

        else
        {
            cout << "\nOpción inválida\n\n";
            MainMenuText();
        }
    }
}

//Function that shows the options for the main menu and ask for the user input 

void MainMenuText()
{
    {
        int input;

        cout << "Menú Principal:\n";
        cout << "---------------\n";
        cout << "---------------\n";
        cout << "1. Nuevo.\n";
        cout << "2. Abrir.\n";
        cout << "3. Salir.\n\n";
        cout << "Ingrese su opción: ";
        cin >> input;
        MainMenu(input);

    }
}

//Function that avoid user to pick the option chosen for the sheet option menu

void SecondMenu(int opt)
{
    switch (opt)
    {
    case 1:
        cout << "\nopt 1\n";
        break;
    case 2:
        cout << "\nopt 2\n";
        break;
    case 3:
        cout << "\nopt 3\n";
        break;
    case 4:
        cout << "\nopt 4\n";
        break;
    case 5:
        cout << "\nopt 5\n";
        break;
    case 6:
        cout << "\nopt 6\n";
        break;
    case 7:
        cout << "\nopt 7\n";
        break;
    case 8:
        cout << "\nopt 8\n";
        break;
    case 9:
        cout << "\nopt 9\n";
        break;
    case 10:
        cout << "\nopt 10\n";
        break;
    case 11:
        cout << "\nopt 11\n";
        break;
    default:
        cout << "\nOpción invalida. \n\n";
        break;
    }
};

//Function that shows the options for the sheet option menu

void ShowMenu()
{

    cout << "\nOpciones:\n";
    cout << "---------";
    cout << "\n1. Ingresar contenido. ";
    cout << "\n2. Saltar a celda. ";
    cout << "\n3. Copiar. ";
    cout << "\n4. Cortar. ";
    cout << "\n5. Pegar. ";
    cout << "\n6. Mover a la izquierda. ";
    cout << "\n7. Mover a la derecha. ";
    cout << "\n8. Moverse arriba. ";
    cout << "\n9. Moverse abajo. ";
    cout << "\n10. Guardar. ";
    cout << "\n11. Salir. \n\n";
};