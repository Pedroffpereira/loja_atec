
#include "./menuGeral.h"


#ifndef menu_admin_file
#define menu_admin_file
void menu_admin(string*** GLOBAL){

    int action;
    
    cout << "1 - Produto" << endl;

    cout << "2 - Cliente" << endl;

    cout << "3 - Relatórios" << endl;

    cout << "4 - Outros" << endl;

    cout << "0 - Sair" << endl;



    cin >> action;

    switch (action)
    {
        case 0:
            GeralProducts(GLOBAL[1]);
            break;

        case 1:

            break;
        case 2:

            break;
        case 3:
        
            break;

        case 4:
            break;
        
    }

}
#endif