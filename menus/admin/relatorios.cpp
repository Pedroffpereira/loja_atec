#include "./relatorios.h"


#ifndef relatorioVendas_file
#define relatorioVendas_file
void relatorioProdutos(string **Bills, string NameProduct) {

    setlocale(LC_ALL, "Portuguese");

    string **tempBills = new string* [101];

    tempBills[0] = nullptr;

    for (int i = 0; i < getsize(Bills); i++)
    {
        if(Bills[i][3] == NameProduct) {
            growArray(tempBills, Bills[i]);
        }
    }
    tableRelatorios(tempBills);

    for (int i = 0; i < getsize(tempBills); i++) {
        delete[] tempBills[i];
    }    
    delete[] tempBills;

    system("pause");

}

#endif

#ifndef relatorioClientes_file
#define relatorioClientes_file
void relatorioClientes(string **Bills, string NameClientes) {

    setlocale(LC_ALL, "Portuguese");

    string **tempBills = new string* [101];

    tempBills[0] = nullptr;

    for (int i = 0; i < getsize(Bills); i++)
    {
        if(Bills[i][1] == NameClientes) {
            growArray(tempBills, Bills[i]);
        }
    }
    tableRelatorios(tempBills);

    for (int i = 0; i < getsize(tempBills); i++) {
        delete[] tempBills[i];
    }    
    delete[] tempBills;

    system("pause");

}

#endif

#ifndef relatorioProdutos_file
#define relatorioProdutos_file


void relatorioProdutos(string **Products) {

    setlocale(LC_ALL, "Portuguese");
    double totalCost = 0, totalSell = 0, totalStock = 0;

    for (int i = 0; i < getsize(Products); i++)
    {
        
        totalCost += stod(Products[i][2]) * stod(Products[i][4]);

        totalSell += stod(Products[i][3]) * stod(Products[i][4]);

        totalStock += stod(Products[i][4]);
    }

    cout << "O total preço de custo é de " << totalCost << endl;

    cout << "O total preço de venda é de " << totalCost << endl;

    cout << "O total STOCK é de  " << totalCost << endl;
    
    system("pause");
}

#endif


#ifndef GeralRelatorios_file
#define GeralRelatorios_file
void GeralRelatorios(string ***GLOBAL)
{
    
    setlocale(LC_ALL, "Portuguese");
    int action;

    do {
        system ("CLS");
        cout << "1 - Relatório de stock" << endl;

        cout << "2 - Relatório de vendas por produto" << endl;

        cout << "3 - Relatório de vendas por Cliente" << endl;

        cout << "4 - Relatório de total de vendas com " << endl;

        cout << "0 - Sair" << endl;

        action = validateTypeInt();
        
        switch (action)
        {
            case 1:
                relatorioProdutos(GLOBAL[1]);
                break;
            case 2:
                string NameProduct;
                cout << "Por favor insira o nome do produto" << endl;
                NameProduct = inputSpace();
                relatorioProdutos(GLOBAL[2], NameProduct);
            break;
            case 3:
                string NameProduct;
                cout << "Por favor insira o nome do produto" << endl;
                NameProduct = inputSpace();
                relatorioClientes(GLOBAL[2], NameProduct);
            break;
        }
    } while(action != 0);
    return;
}
#endif