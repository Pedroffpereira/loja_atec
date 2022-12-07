#include"./array_function.h"




#ifndef getsize_file
#define getsize_file
    //Get Size of a Matrix
    int getsize(string **arr){
        int i = 0;
        
        while (arr[i] != nullptr){
            i++;
        }
        
        return i;

    }

    //Get Size of a array
    int getsize(string *arr){
        int i = 0;
        
        while (arr[i] != "\n"){
            i++;
        }
        
        return i;
    }

#endif

#ifndef growArray_file
#define growArray_file
    //Make a dynamic grow array and insert valeu
    void growArray(string **Matrix, string * Value){
        cout <<  getsize(Matrix) << endl;
        if(getsize(Matrix) > 0) {

            int lastPos = getsize(Matrix);

            

            delete[] Matrix[lastPos];

            Matrix[lastPos] = new string [getsize(Value) + 1];

            cout << 2 << endl;
            for (int i = 0; i < getsize(Value) + 1; i++)
            {

                Matrix[lastPos][i] = Value[i];
                
                Matrix[lastPos][i] =Value[i];
                
                Matrix[lastPos][getsize(Value)] = "\n";
                
            }
            delete[] Matrix[getsize(Matrix)];
            Matrix[lastPos + 1] = nullptr;

        } else {
            cout << 1;
            delete[] Matrix[0];
cout << 2;
            cout << getsize(Value) << endl;
cout << 3;
            Matrix[0] = new string [getsize(Value) + 1];
         cout << 4;
            for (int i = 0; i < getsize(Value) + 1; i++)
            {
                Matrix[0][i] = Value[i];
cout << 5;
            }
         cout << 6;
            Matrix[0][getsize(Value)] = "\n";
         cout << 7;
            Matrix[1] = nullptr;
cout << 8;
        }
        delete[] Value;
    }
    
    
#endif

#ifndef deleteItem_file
#define deleteItem_file
    //Make a dynamic grow array and insert valeu
    void deleteItem(string **Matrix, string id){
        string** newMatrix = new string*[getsize(Matrix) + 1];
        
        int m = 0;

        for (int i = 0; i < getsize(Matrix) + 1; i++)
        {
            if(Matrix[i] != nullptr && Matrix[i][0] != id)
                cout << Matrix[i][0];
            if(Matrix[i] != nullptr && Matrix[i][0] != id) {
                
                newMatrix[m] = new string[getsize(Matrix[i]) + 1];
                for (int j = 0; j < getsize(Matrix[i]) + 1; j++)
                {
                    newMatrix[m][j] = Matrix[i][j];
                }
                m++;
            }
        }
        
        newMatrix[m] = nullptr;
        
        for (int i = 0; i < getsize(newMatrix) + 1; i++)
        {
            if(newMatrix[i] != nullptr){
                for (int j = 0; j < getsize(newMatrix[i]) + 1; j++)
                {
                    
                    Matrix[i][j] = newMatrix[i][j];
                    
                }
            }else {
                Matrix[i] = nullptr;
            }

        }

    }
    
    
#endif