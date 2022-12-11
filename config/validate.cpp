#include "./validate.h"


#ifndef validateDataByPosition_file
#define validateDataByPosition_file

string validateDataByPosition(string** Matrix, int pos){

    char first;

    string choice,Text;


    bool error = false;
    
    do {
        cin >> first;

        getline(cin, choice);
        
        Text = first + choice;

        
        for (int i = 0; i < getsize(Matrix); i++)
        {
            if(Matrix[i][1] == Text){
                error = true;
                cout << "O nome já esta a ser utilizado " << endl;
                cout << "Por favor insira um novo nome" << endl;
                break;
            }
        }
        

    } while (error);
    
    return Text;
}


#endif




#ifndef validatetype_file
#define validatetype_file

int validateTypeInt(){

    int choice;

    while (!(cin >> choice))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Por favor insira um numero" << endl;
    }
    


    return choice;

}
#endif

#ifndef validateTypeDouble_file
#define validateTypeDouble_file


double validateTypeDouble(){

    double choice;

    while (!(cin >> choice))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Por favor insira um numero" << endl;
    }
    


    return choice;

}

#endif