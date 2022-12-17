#include "./RelatoriosFunctions.h"
#ifndef tableRelatorios_file
#define tableRelatorios_file

    //Show table of products
    void tableRelatorios(string** Bills) {


        cout << "." << setfill('_') << setw(getsizestring(Bills, 0, "Numero da fatura") +
                            getsizestring(Bills, 1, "Numero do cliente") + 
                            getsizestring(Bills, 2, "Numero de linha") + 
                            getsizestring(Bills, 3, "Nome do produto") +
                            getsizestring(Bills, 4, "Quantidade") + 
                            getsizestring(Bills, 5, "Preco s/IVA") +
                            getsizestring(Bills, 6, "IVA") +
                            getsizestring(Bills, 7, "Total C/iva") +
                            getsizestring(Bills, 8, "Valor Entregue") +
                            getsizestring(Bills, 9, "Troco") +
                            getsizestring(Bills, 10, "Data") + 33
        ) << "." << endl << setfill(' ');

        cout << "| " << setw(getsizestring(Bills, 0, "Numero da fatura")) << "Numero da fatura" << " | "
              << setw(getsizestring(Bills, 1, "Numero do cliente")) << left << "Numero do cliente" << " | "
              << setw(getsizestring(Bills, 2, "Numero de linha"))  << right << "Numero de linha" << " | "
              << setw(getsizestring(Bills, 3, "Nome do produto")) << "Nome do produto" << " | "
              << setw(getsizestring(Bills, 4, "Quantidade")) << "Quantidade" << " | "
              << setw(getsizestring(Bills, 5, "Preco s/IVA")) << "Preco s/IVA" << " | " 
              << setw(getsizestring(Bills, 6, "IVA")) << "IVA" << " | "
              << setw(getsizestring(Bills, 7, "Total C/iva")) << "Total C/iva" << " | "
              << setw(getsizestring(Bills, 8, "Valor Entregue")) << "Valor Entregue" << " | "
              << setw(getsizestring(Bills, 9, "Troco")) << "Troco" << " | " 
              << setw(getsizestring(Bills, 10, "Data")) << "Data" << " | " 
              << endl;


        for (int i = 0; i < getsize(Bills); i++) {
            cout << "| " << setw(getsizestring(Bills, 0, "Numero da fatura")) << Bills[i][0] << " | " << 
            setw(getsizestring(Bills, 1, "Numero do cliente")) << Bills[i][1] << " | " << 
            setw(getsizestring(Bills, 2, "Numero de linha")) << Bills[i][2] << " | " << 
            setw(getsizestring(Bills, 3, "Nome do produto")) << Bills[i][3] << " | " << 
            setw(getsizestring(Bills, 4, "Quantidade")) << Bills[i][4] << " | " << 
            setw(getsizestring(Bills, 5, "Preco s/IVA")) << Bills[i][5] << " | " << 
            setw(getsizestring(Bills, 6, "IVA")) << Bills[i][6] << " | " << 
            setw(getsizestring(Bills, 7, "Total C/iva")) << Bills[i][7] << " | " << 
            setw(getsizestring(Bills, 8, "Valor Entregue")) << Bills[i][8] << " | " << 
            setw(getsizestring(Bills, 9, "Troco")) << Bills[i][9] << " | " << 
            setw(getsizestring(Bills, 10, "Data")) << Bills[i][10] << " | "
            << endl;
        }

        cout << "." << setfill('-') << setw(getsizestring(Bills, 0, "Numero da fatura") +
                            getsizestring(Bills, 1, "Numero do cliente") + 
                            getsizestring(Bills, 2, "Numero de linha") + 
                            getsizestring(Bills, 3, "Nome do produto") +
                            getsizestring(Bills, 4, "Quantidade") + 
                            getsizestring(Bills, 5, "Preco s/IVA") +
                            getsizestring(Bills, 6, "IVA") + 
                            getsizestring(Bills, 7, "Total C/iva") +
                            getsizestring(Bills, 8, "Valor Entregue") +
                            getsizestring(Bills, 9, "Troco") +
                            getsizestring(Bills, 10, "Data") + 33
        ) << "."  << endl << setfill(' ');
    }
#endif