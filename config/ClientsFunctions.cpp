
#include "../control_array/array_function.h"

#include "./ProductsFunctions.h"


#ifndef tableClients_file
#define tableClients_file

    //Show table of clients
    void tableClients(string** list_clients){
        if(getsize(list_clients) > 0){
            cout << "." << setfill('_') << setw(getsizestring(list_clients, 0, "Id") +
                            getsizestring(list_clients, 1, "Email") + 
                            getsizestring(list_clients, 5, "Nome") + 
                            getsizestring(list_clients, 4, "Contribuinte") +
                            getsizestring(list_clients, 6, "N� Telefone") + 
                            getsizestring(list_clients, 7, "Morada") +
                            getsizestring(list_clients, 3, "Role") + 21
            ) << "." << endl << setfill(' ');

            cout << "| " << setw(getsizestring(list_clients, 0, "Id")) << "Id" << " | "
                << setw(getsizestring(list_clients, 1, "Email")) << left << "Email" << " | "
                << setw(getsizestring(list_clients, 5, "Nome"))  << right << "Nome" << " | "
                << setw(getsizestring(list_clients, 4, "Contribuinte")) << "Contribuinte" << " | "
                << setw(getsizestring(list_clients, 6, "N� Telefone")) << "N� Telefone" << " | "
                << setw(getsizestring(list_clients, 7, "Morada")) << "Morada" << " | " 
                << setw(getsizestring(list_clients, 3, "Role")) << "Role" << " |" 
                << endl;


            for (int i = 0; i < getsize(list_clients); i++) {
                cout << "| " << setw(getsizestring(list_clients, 0, "Id")) << list_clients[i][0] << " | " << 
                setw(getsizestring(list_clients, 1, "Email")) << list_clients[i][1] << " | " << 
                setw(getsizestring(list_clients, 5, "Nome")) << list_clients[i][5] << " | " << 
                setw(getsizestring(list_clients, 4, "Contribuinte")) << list_clients[i][4] << " | " << 
                setw(getsizestring(list_clients, 6, "N� Telefone")) << list_clients[i][6] << " | " << 
                setw(getsizestring(list_clients, 7, "Morada")) << list_clients[i][7] << " | " << 
                setw(getsizestring(list_clients, 3, "Role")) << list_clients[i][3] << " |" << endl;
            }

            cout << "'" << setfill('-') << setw(getsizestring(list_clients, 0, "Id") +
                                getsizestring(list_clients, 1, "Email") + 
                                getsizestring(list_clients, 5, "Nome") + 
                                getsizestring(list_clients, 4, "Contribuinte") +
                                getsizestring(list_clients, 6, "N� Telefone") + 
                                getsizestring(list_clients, 7, "Morada") +
                                getsizestring(list_clients, 3, "Role") + 21
            ) << "'"  << endl << setfill(' ');
        } else {
            cout << "Não foram encontrados Clientes" << endl;
        }
    }
#endif
