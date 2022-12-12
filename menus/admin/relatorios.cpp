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

#ifndef biggestSell_file
#define biggestSell_file

    void biggestSell(string** Bills) {

        string** Products = allProductsBillsSort(Bills, 4);

        cout << "O produto mais vendido é " << Products[getsize(Products)];


        system("pause");
    }

#endif

#ifndef smallestSell_file
#define smallestSell_file

       void smallestSell(string** Bills) {
        
        
        string** Products = allProductsBillsSort(Bills, 4);

        cout << "O produto menos vendido é " << Products[0][0];

        
        system("pause");

    }

#endif

#ifndef biggestbuyer_file
#define biggestbuyer_file

#endif

#ifndef productProfitSort_file
#define productProfitSort_file

    void productProfitSort(string** Bills) {

        string** clients = allProductsBillsSort(Bills, 7);

        cout << "O Client que comprou mais é " << clients[getsize(clients)][0];


        system("pause");
    }

#endif


#ifndef allProductsBillsSort_file
#define allProductsBillsSort_file

    string** allProductsBillsSort(string **bill, int pos) {
        
        string** Products = new string*[102];

        Products[0] = nullptr;

        for (int i = 0; i < getsize(bill); i++)
        {

            bool flag = false;

            for (int j = 0; j < getsize(Products); j++)
            {
                
                if(Products[j][0] == bill[i][3]) {

                    Products[j][1] = to_string(stoi(Products[j][1]) + stoi(bill[i][pos]));

                    flag = true;

                }

            }

            if(!flag){
                delete[] Products[i];

                Products[i] = new string[2];

                Products[i][0] = bill[i][3];

                Products[i][1] = bill[i][pos];

                Products[i + 1] = nullptr;
            }

        }
        
        for(int i=0; i< getsize(Products); i++)
        {		
            for(int j=i+1; j < getsize(Products) ; j++)
            {
                if(Products[i][1]>Products[j][1])
                {
                    string* temp = new string[2];

                    temp  = Products[i];
                    Products[i]=Products[j];
                    Products[j]=temp;
                }
            }
        }


        return Products;
    }


#endif

#ifndef GeralRelatoriostotal_file
#define GeralRelatoriostotal_file
    void GeralRelatoriosTotal(string **bill) {
        setlocale(LC_ALL, "Portuguese");
        int action;
    
        do {

            system ("CLS");

            cout << "1 - Produto mais vendido" << endl;

            cout << "2 - Produto menos vendido" << endl;

            cout << "3 - Produto com mais lucro" << endl;

            cout << "4 - Cliente que mais comprou" << endl;

            cout << "0 - Sair" << endl;

            action = validateTypeInt();

            switch (action)
            {
                case 1:
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }



        } while(action != 0);
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
        string NameProduct;
        switch (action)
        {
            case 1:
                relatorioProdutos(GLOBAL[1]);
                break;
            case 2:
                cout << "Por favor insira o nome do produto" << endl;
                NameProduct = inputSpace();
                relatorioProdutos(GLOBAL[2], NameProduct);
            break;
            case 3:
                
                cout << "Por favor insira o nome do produto" << endl;
                NameProduct = inputSpace();
                relatorioClientes(GLOBAL[2], NameProduct);
            break;
            case 4:
                GeralRelatoriosTotal(GLOBAL[1]);
            break;
        }
    } while(action != 0);
    return;
}
#endif