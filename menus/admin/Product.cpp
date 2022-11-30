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

    cout << "2 - Alterar Produto" << endl;

    cout << "3 - Apagar Produto" << endl;

    cout << "0 - Sair" << endl;

    cin >> action;

    switch (action)
    {
        case 1:
            CreateProduct(Products);
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