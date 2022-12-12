
#include"./login.h"
#ifndef logins

#define logins

bool login(string **SESSION, string** accounts) {
	system ("CLS");
    string email, pass;

    cout << "Digite o seu email:" << endl << endl;

    cin >> email;
    
    cout << endl << endl;


    cout << "Digite a sua password:" << endl << endl;

    cin >> pass;


    for (int i = 0; i < getsize(accounts); i++) {
        if(accounts[i][1] == email && accounts[i][2] == pass){
            growArray(SESSION,accounts[i]);
            return true;
        }

    }


    return false;
    
    
}


#endif