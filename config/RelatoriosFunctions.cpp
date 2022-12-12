#include "./RelatoriosFunctions.h"
#ifndef tableRelatorios_file
#define tableRelatorios_file

    //Show table of products
    void tableRelatorios(string** Bills){
        cout << "___________________________________________________________________________________________________________________________________________________" << endl;
        cout << "|**************************************************************************************************************************************************|" << endl;
        cout << "| Número da fatura | Número do cliente | Número de linha | Nome do produto | Quantidade | Preço s/IVA | IVA | Total C/iva | Valor entregue | Troco |" << endl;


        for (int i = 0; i < getsize(Bills); i++) {
            
            cout << "| " << Bills[i][0] << " | " << Bills[i][1] << " | " << Bills[i][2] << " | " << Bills[i][3] << " | " << Bills[i][4] << Bills[i][5] << " | " << Bills[i][6] << " | " << Bills[i][7] << " | " << Bills[i][8] << " | " << Bills[i][9] << " |" << endl;

        }

        cout << "|**************************************************************************************************************************************************|" << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
#endif