#include "./client.h"

#ifndef CreateClients_file
#define CreateClients_file
void CreateClients(string **Clients)
{
	system ("CLS");
    string *client = new string[9];

    string name, tel, morada, pass, email, contrib;
    cout << "Insira o Email do Cliente" << endl;

    cin >> email;

    cout << "Insira o Nome do Cliente" << endl;

    cin >> name;

    cout << "Insira o nº de telefone" << endl;

    cin >> tel;

    cout << "Insira a morada" << endl;

    cin >> morada;

    cout << "Insira o nº de contribuinte" << endl;

    cin >> contrib;

    cout << "Insira a pass" << endl;

    cin >> pass;

    //ID CLIENTE
    client[0] = to_string(getsize(Clients) + 1);
    //Name client
    client[1] = validateDataByPosition(Clients, 1);
    //Password
    client[2] = pass;
    //Role
    client[3] = "CLIENT";
    //contribuinte
    client[4] = validateDataByPosition(Clients, 4);
    //nome
    client[5] = validateDataByPosition(Clients, 5);
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

        cin >> action;
        
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

        cin >> action;

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
                /*
                cout << "Por favor digite o ID do produto";
                string id;
                cin >> id;
                deleteProducts(id, Products);*/
                break;

            case 4:
                break;
        }

    } while(action != 0);
}

#endif