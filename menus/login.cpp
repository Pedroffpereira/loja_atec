
#include"./login.h"
#ifndef logins

#define logins

bool login(string **SESSION, string** accounts) {

    string email, pass;

    cout << "Digite o seu email:" << endl << endl;

    cin >> email;
    
    cout << endl << endl;


    cout << "Digite a sua password:" << endl << endl;

    cin >> pass;


    for (int i = 0; i < getsize(accounts); i++) {
        
        if(accounts[i][0] == email && accounts[i][1] == pass){
            
            growArray(SESSION,accounts[i]);
            return true;
        }

    }

    return false;
    
    
}


#endif