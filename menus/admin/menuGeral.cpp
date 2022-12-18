
#include "./menuGeral.h"


#ifndef menu_admin_file
#define menu_admin_file
void menu_admin(string*** GLOBAL){

    setlocale(LC_ALL, "Portuguese");
    int action;
    do {


        system ("CLS");
        
        cout << "1 - Produtos" << endl;

        cout << "2 - Clientes" << endl;

        cout << "3 - Relatórios" << endl;

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
                GeralRelatorios(GLOBAL);
                break;
            
        }
    } while (action != 0);
    
}
#endif