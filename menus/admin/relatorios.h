#include <string>

#include <iostream>


#include "../../config/ClientsFunctions.cpp"

#include "../../control_array/array_function.cpp"


using namespace std;


void relatorioStock(string **Products);



#ifndef menu_relatorios_file
#define menu_relatorios_file
void menu_relatorios(string*** GLOBAL){

    
    int action;
    do {


        system ("CLS");
        
        cout << "1 - Produtos" << endl;

        cout << "2 - Clientes" << endl;

        cout << "3 - Relatórios" << endl;

        cout << "4 - Outros" << endl;

        cout << "0 - Sair" << endl;



        cin >> action;

        switch (action)
        {
            case 1:
                GeralProducts(GLOBAL[1]);
                break;
            case 2:
                GeralClients(GLOBAL[0]);
                break;
            case 3:
            
                break;

            case 4:
                break;
            
        }
    } while (action != 0);
    
}
#endif