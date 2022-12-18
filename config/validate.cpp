#include "./validate.h"

#ifndef inputSpace_file
#define inputSpace_file
string inputSpace() {

    char first;
    string choice;

    cin >> first;

    getline(cin, choice);
        
    return first + choice;
}

#endif


#ifndef validateDataByPosition_file
#define validateDataByPosition_file
//Valida se os dados estão repetido por dado uma possição x
string validateDataByPosition(string** Matrix, int pos){
setlocale(LC_ALL, "Portuguese");
    char first;

    string choice,Text;


    bool error = false;
    
    do {
        error = false;
        cin >> first;

        getline(cin, choice);
        
        Text = first + choice;

        
        for (int i = 0; i < getsize(Matrix); i++)
        {
            if(Matrix[i][1] == Text){
                error = true;
                cout << "O valor já esta a ser utilizado " << endl;
                cout << "Por favor insira um novo valor" << endl;
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
setlocale(LC_ALL, "Portuguese");
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
setlocale(LC_ALL, "Portuguese");
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