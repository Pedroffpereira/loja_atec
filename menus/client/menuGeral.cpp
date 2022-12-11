#include "menuGeral.h"

void menu_client(string*** GLOBAL,string** SESSION){

    system("cls");
    
    int action;

    do{

    cout << "1 - Produtos" << endl;

    cout << "2 - Gerir conta" << endl;

    cout << "3 - Relatórios" << endl;

    cout << "4 - Outros" << endl;

    cout << "0 - Sair" << endl;



    cin >> action;

    switch (action){
        case 1:
            menu_manage_client(GLOBAL, SESSION);
            system("pause");
            menu_client(GLOBAL, SESSION);
        break;

        case 2:
            changeClientAcc(GLOBAL, SESSION);
            system("pause");
            menu_client(GLOBAL, SESSION);
        break;

        case 3:
            //deleteAcc(GLOBAL, SESSION);
        break;

        /*case 4:

        break;*/

        case 9:
            //main();
        break;

    }





    }
    while(action != 0);

    

}