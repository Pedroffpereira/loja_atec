

void showClientInfo(string*** GLOBAL,string** SESSION);
void changeClientAcc(string*** GLOBAL,string** SESSION);





void menu_manage_client(string*** GLOBAL,string** SESSION){

    system("cls");
    
    int action;

    do{

    cout << "1 - Info pessoal" << endl;

    cout << "2 - Alterar conta" << endl;

    cout << "3 - Eliminar conta" << endl;

    //cout << "4 - Estado da conta" << endl;

    cout << "9 - Retroceder" << endl;

    cout << "0 - Sair" << endl;



    cin >> action;

    switch (action){
        case 1:
            showClientInfo(GLOBAL, SESSION);
            system("pause");
            menu_manage_client(GLOBAL, SESSION);
        break;

        case 2:
            changeClientAcc(GLOBAL, SESSION);
            system("pause");
            menu_manage_client(GLOBAL, SESSION);
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


//                0      1     2     3    4     5    6       7
//SESSION[][] = {id, email, pass, role, nif, nome, tel, morada, \n}
void showClientInfo(string*** GLOBAL,string** SESSION){

    system("cls");

    cout << "Id de cliente: " << SESSION[0][0] << endl;

    cout << "E-mail: " << SESSION[0][1] << endl;

    cout << "Role: " << SESSION[0][3] << endl;

    cout << "NIF: " << SESSION[0][4] << endl;

    cout << "Nome: " << SESSION[0][5] << endl;

    cout << "Número de telefone: " << SESSION[0][6] << endl;

    cout << "Morada: " << SESSION[0][7] << endl;
}

void changeClientAcc(string*** GLOBAL,string** SESSION){
    cout << "Id de cliente: " << SESSION[0][0] << endl;

    cout << "Nome: " << SESSION[0][5] << endl;

    cout << "Número de telefone: " << SESSION[0][6] << endl;

    cout << "Morada: " << SESSION[0][7] << endl << endl << endl;

    char infoChangeConf;
    cout << "Tem a certeza que deseja alterar informações? [Y/N]" << endl;
    cin >> infoChangeConf;
    switch(infoChangeConf){
    case 'y':
        cout << "Novo nome: " << endl;
        cin >> SESSION[0][5];
        system("cls");

        cout << "Novo número de telefone:" << endl;
        cin >> SESSION[0][6];
        system("cls");

        cout << "Nova morada: " << endl;
        cin >> SESSION[0][7];
        system("cls");

        cout << "Informação atualizada com sucesso!";
        break;

    case 'Y':
        cout << "Novo nome: " << endl;
        cin >> SESSION[0][5];
        system("cls");

        cout << "Novo número de telefone:" << endl;
        cin >> SESSION[0][6];
        system("cls");

        cout << "Nova morada: " << endl;
        cin >> SESSION[0][7];
        system("cls");

        cout << "Informação atualizada com sucesso!";
        break;
    
    case 'n':
        menu_manage_client(GLOBAL, SESSION);
    break;

    case 'N':
        menu_manage_client(GLOBAL, SESSION);
    break;

    default:
        cout << "ERRO! Terminando o programa";
        system("pause");
        exit(0);
        break;
    }
}

