#include "./relatorios.h"




#ifndef relatorioStock_file
#define relatorioStock_file


void relatorioStock(string **Products) {

    double totalCost = 0, totalSell = 0, totalStock = 0;

    for (int i = 0; i < getsize(Products) + 1; i++)
    {
        
        totalCost += stod(Products[i][2]) * stod(Products[i][4]);

        totalSell += stod(Products[i][3]) * stod(Products[i][4]);

        totalStock += stod(Products[i][4]);
    }

    cout << "O total preço de custo é de " << totalCost;

    cout << "O total preço de venda é de " << totalCost;

    cout << "O total STOCK é de  " << totalCost;

    cin;
}

#endif


#ifndef GeralRelatorios_file
#define GeralRelatorios_file
void GeralRelatorios(string ***GLOBAL)
{
    
    int action;

    do {
        system ("CLS");
        cout << "1 - Relatório de stock" << endl;

        cout << "2 - Relatório de stock" << endl;

        cout << "3 - Relatório de stock" << endl;

        cout << "0 - Sair" << endl;

        cin >> action;
        
        switch (action)
        {
            case 1:
                relatorioStock(GLOBAL[1]);
                break;
            case 2:
                ShowClients(Clients);
                break;
        }
    } while(action != 0);
    return;
}
#endif