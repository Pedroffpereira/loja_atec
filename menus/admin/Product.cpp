#include "./Product.h"

#ifndef CreateProduct_file
#define CreateProduct_file
//Cria o Produto
void CreateProduct(string **Products)
{
	system ("CLS");

    string *product = new string[6];

    string name;

    double price_cost;
    int stock;

    cout << "Insira o Nome do Produto" << endl;

    name = validateDataByPosition(Products,1);

    cout << "Insira o preço do produto" << endl;

    price_cost = validateTypeDouble();

    cout << "Insira a quantidade de stock desse produto" << endl;

    stock = validateTypeInt();

    product[0] = to_string(stoi(Products[getsize(Products) - 1][0]) + 1);
    //Name Product
    product[1] = name;
    //cost price 
    product[2] = to_string(price_cost);
    //sell price
    product[3] = to_string( price_cost * 1.30);
    //Stock
    product[4] = to_string(stock);
    
    
    product[5] = "\n";

    growArray(Products, product);

    return;
}
#endif



#ifndef GeralProducts_file
#define GeralProducts_file
//Menu Geral dos produtos
void GeralProducts(string **Products)
{
    
    int action;

    do {
        system ("CLS");
        cout << "1 - Adicionar Produto" << endl;

        cout << "2 - Mostra todos os Produtos ("  << getsize(Products) << ")" << endl;

        cout << "0 - Sair" << endl;

        cin >> action;
        
        switch (action)
        {
            case 1:
                CreateProduct(Products);
                break;
            case 2:
                ShowProducts(Products);
                break;
        }
    } while(action != 0);
    return;
}
#endif


#ifndef alterProducts_file
#define alterProducts_file
void alterProducts(string **Products, string id)
{

    system ("CLS");
    string name;

    double price_cost, stock;

    cout << "Insira o novo Nome do Produto" << endl;

    cin >> name;

    cout << "Insira o novo preço do produto" << endl;

    cin >> price_cost;

    cout << "Insira a nova quantidade de stock desse produto" << endl;

    cin >> stock;

    for (int i = 0; i < getsize(Products); i++)
    {
        if(Products[i][0] == id) {

            //Name Product
            Products[i][1] = name;
            //cost price 
            Products[i][2] = to_string(price_cost);
            //sell price
            Products[i][3] = to_string( price_cost * 1.30);
            //Stock
            Products[i][4] = to_string(stock);
            
            
            Products[i][5] = "\n";
        }
    }

    return;
}
#endif


#ifndef addStockProducts_file
#define addStockProducts_file
void addStockProducts(string **Products, string id, int stock)
{

    system ("CLS");

    for (int i = 0; i < getsize(Products); i++)
    {
        if(Products[i][0] == id) {

            //Stock
            Products[i][4] = to_string(stock + stoi(Products[i][4]));
        }
    }

    return;
}
#endif

#ifndef searchProducts_file
#define searchProducts_file

    void searchProducts(string** Products, string id) {
        system("CLS");
        string** tempMatrix = new string* [2];
        tempMatrix[0] = nullptr;
        tempMatrix[1] = nullptr;
        for (int i = 0; i < getsize(Products); i++)
        {
            if(Products[i][0] == id) {
                delete[] tempMatrix[0];
                tempMatrix[0] = new string[getsize(Products[i])];
                for (int j = 0; j < getsize(Products[i]); j++)
                {
                    tempMatrix[0][j] = Products[i][j];
                }
                
            }
        }
        tableProducts(tempMatrix);
        delete[] tempMatrix[0];
        delete[] tempMatrix[1];
        system("PAUSE");
    }

#endif

#ifndef ShowProducts_file
#define ShowProducts_file


void ShowProducts(string **Products) {
    
    int action;

    do {
        system("CLS");
        tableProducts(Products);

        cout << "1 - Procurar Produto" << endl;

        cout << "2 - Alterar Produto" << endl;

        cout << "3 - Apagar Produtos" << endl;

        cout << "4 - Acrescentar stock ao Produto" << endl;

        cout << "0 - Sair" << endl;

        action = validateTypeInt();

        string id;

        

        int stock;

        switch (action)
        {
            case 1:
                cout << "Por favor digite o ID do produto" << endl;
                
                cin >> id;

                searchProducts(Products, id);
                break;
            case 2:
                cout << "Por favor digite o ID do produto" << endl;
                
                cin >> id;

                alterProducts(Products, id);

                break;
            case 3:

                cout << "Por favor digite o ID do produto" << endl;
                
                cin >> id;

                deleteItem(Products, id);
            break;
            case 4:

                cout << "Por favor digite o ID do produto" << endl;
                
                cin >> id;

                cout << "Por favor digite a quantidade que quer acrescentar" << endl;
                
                stock = validateTypeInt();

                addStockProducts(Products, id, stock);

            break;

        }

    } while(action != 0);
}

#endif