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