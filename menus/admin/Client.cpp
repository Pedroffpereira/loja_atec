#include "./client.h"

#ifndef CreateClients_file
#define CreateClients_file
void CreateClients(string **Clients)
{
	system ("CLS");
    string *client = new string[9];

    string name, tel, morada, pass, email, contrib;
    cout << "Insira o Email do Cliente" << endl;

    email = validateDataByPosition(Clients, 1);

    cout << "Insira o Nome do Cliente" << endl;

    name = validateDataByPosition(Clients, 5);

    cout << "Insira o nº de telefone" << endl;

    cin >> tel;

    cout << "Insira a morada" << endl;

    cin >> morada;

    cout << "Insira o nº de contribuinte" << endl;

    contrib = validateDataByPosition(Clients, 4);

    cout << "Insira a pass" << endl;

    cin >> pass;

    //ID CLIENTE
    client[0] = to_string(stoi(Clients[getsize(Clients) - 1][0]) + 1);
    //Name client
    client[1] = email;
    //Password
    client[2] = pass;
    //Role
    client[3] = "CLIENT";
    //contribuinte
    client[4] = contrib;
    //nome
    client[5] = name;
    //tel
    client[6] = tel;
    //morada
    client[7] = morada;

    //FIM
    client[8] = "\n";

    growArray(Clients, client);
}
#endif



#ifndef GeralClients_file
#define GeralClients_file
void GeralClients(string **Clients)
{
    
    int action;

    do {
        system ("CLS");
        cout << "1 - Adicionar Clients" << endl;

        cout << "2 - Mostra todos os Clients ("  << getsize(Clients) << ")" << endl;

        cout << "0 - Sair" << endl;

        action = validateTypeInt();        

        switch (action)
        {
            case 1:
                CreateClients(Clients);
                break;
            case 2:
                ShowClients(Clients);
                break;
        }
    } while(action != 0);
    return;
}
#endif


#ifndef alterClients_file
#define alterClients_file
void alterClients(string **Clients, string id)
{

    system ("CLS");
    string name, tel, morada, pass;

    cout << "Insira o novo Nome do Cliente" << endl;

    cin >> name;

    cout << "Insira o nº de telefone" << endl;

    cin >> tel;

    cout << "Insira a morada" << endl;

    cin >> morada;

    cout << "Insira a pass" << endl;

    cin >> pass;

    for (int i = 0; i < getsize(Clients); i++)
    {
        if(Clients[i][0] == id) {

            //Name Product
            Clients[i][1] = name;
            //cost price 
            Clients[i][2] = pass;
            //sell price
            Clients[i][3] = "CLIENT";
            //Stock
            Clients[i][4] = tel;
            
            Clients[i][5] = morada;

            Clients[i][6] = "\n";
        }
    }

    return;
}
#endif


#ifndef ShowClients_file
#define ShowClients_file


void ShowClients(string **Clients) {
    
    int action;

    do {

        system("CLS");

        tableClients(Clients);

        cout << "1 - Procurar Cliente" << endl;

        cout << "2 - Alterar Cliente" << endl;

        cout << "3 - Apagar Clientes" << endl;

        cout << "0 - Sair" << endl;

        action = validateTypeInt();

        string id;

        switch (action)
        {
            case 1:
                break;
            case 2:
                cout << "Por favor digite o ID do Cliente";
                
                cin >> id;
                alterClients(Clients, id);
                break;
            case 3:
                cout << "Por favor digite o ID do produto";
                cin >> id;
                deleteItem(Clients, id);
                break;

            case 4:
                break;
        }

    } while(action != 0);
}

#endif