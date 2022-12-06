#include "./client.h"

#ifndef CreateProduct_file
#define CreateProduct_file
void CreateClients(string **Clients)
{
	system ("CLS");
    string *client = new string[6];

    string name, tel, morada, pass;
    cout << "Insira o Nome do Cliente" << endl;

    cin >> name;

    cout << "Insira o nº de telefone" << endl;

    cin >> tel;

    cout << "Insira a morada" << endl;

    cin >> morada;

    cout << "Insira a pass" << endl;

    cin >> pass;

    //ID CLIENTE
    client[0] = to_string(getsize(Clients) + 1);
    //Name client
    client[1] = name;
    //Password
    client[2] = pass;
    //Role
    client[3] = "CLIENT";
    //tel
    client[4] = tel;
    //morada
    client[5] = morada;
    //FIM
    client[6] = "\n";

    growArray(Clients, client);

    return;
}
#endif



#ifndef GeralProducts_file
#define GeralProducts_file
void GeralClients(string **Clients)
{
    
    int action;

    do {
        system ("CLS");
        cout << "1 - Adicionar Produto" << endl;

        cout << "2 - Mostra todos os Produtos ("  << getsize(Clients) << ")" << endl;

        cout << "0 - Sair" << endl;

        cin >> action;
        
        switch (action)
        {
            case 1:
                CreateClient(Clients);
                break;
            case 2:
                ShowClients(Clients);
                break;
        }
    } while(action != 0);
    return;
}
#endif


#ifndef alterProducts_file
#define alterProducts_file
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


#ifndef ShowProducts_file
#define ShowProducts_file


void ShowReports(string **Clients) {
    
    int action;

    do {

        system("CLS");

        tableClients(Clients);

        cout << "1 - Relatóriode stock" << endl;

        cout << "2 - Relatóriode vendaspor produt" << endl;

        cout << "3 - Relatóriode total de venda" << endl;

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