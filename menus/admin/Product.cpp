#include "./Product.h"

#ifndef CreateProduct_file
#define CreateProduct_file
void CreateProduct(string **Products)
{
	system ("CLS");
    string *product = new string[5];

    string name;

    double price_cost, stock;

    cout << "Insira o Nome do Produto" << endl;

    cin >> name;

    cout << "Insira o preço do produto" << endl;

    cin >> price_cost;

    cout << "Insira a quantidade de stock desse produto" << endl;

    cin >> stock;

    product[0] = "";

    product[1] = name;

    product[2] = price_cost;

    product[3] = stock;

    product[4] = to_string(price_cost * 0.30);

    growArray(Products, product);

    Products[0][1];
}
#endif

#ifndef GeralProducts_file
#define GeralProducts_file
void GeralProducts(string **Products)
{
    system ("CLS");
    int action;

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
        case 3:

            break;

        case 4:
            break;
    }
}
#endif


#ifndef ShowProducts_file
#define ShowProducts_file


void ShowProducts(string **Products) {
    
     system("CLS");

    for (int i = 0; i < getsize(Products); i+2) {

        string* frist_c = Products[i];
        string* second_c = (Products[i+1] == nullptr) ? Products[i+1] : nullptr;
        cout << frist_c << " | " << second_c << endl;
    }
    
    
  
    int action = 0;

    cout << "1 - Alterar Produto" << endl;

    cout << "2 - Apagar Produtos" << endl;

    cout << "0 - Sair" << endl;

}

#endif