#include "./Product.h"

#ifndef CreateProduct_file
#define CreateProduct_file
void CreateProduct(string **Products)
{
	system ("CLS");
    string *product = new string[6];

    string name;

    double price_cost;
    int stock;

    cout << "Insira o Nome do Produto" << endl;

    name = validateName(Products);

    cout << "Insira o preço do produto" << endl;

    price_cost = validateTypeDouble();

    cout << "Insira a quantidade de stock desse produto" << endl;

    stock = validateTypeInt();

    product[0] = to_string(getsize(Products) + 1);
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


#ifndef ShowProducts_file
#define ShowProducts_file


void ShowProducts(string **Products) {
    
    int action;

    do {
        tableProducts(Products);

        cout << "1 - Procurar Produto" << endl;

        cout << "2 - Alterar Produto" << endl;

        cout << "3 - Apagar Produtos" << endl;

        cout << "0 - Sair" << endl;

        cin >> action;

            string id;

        switch (action)
        {
            case 1:
                break;
            case 2:
                cout << "Por favor digite o ID do produto";
                
                cin >> id;
                alterProducts(Products, id);
                break;
            case 3:
                cout << "Por favor digite o ID do produto";
                string id;
                cin >> id;
                deleteItem(Products, id);
                break;
        }

    } while(action != 0);
}

#endif