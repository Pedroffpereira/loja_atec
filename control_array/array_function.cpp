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
         
            delete Matrix[0];

            cout << getsize(Value) << endl;

            Matrix[0] = new string [getsize(Value) + 1];
            for (int i = 0; i < getsize(Value) + 1; i++)
            {
                Matrix[0][i] =Value[i];

            }
            Matrix[0][getsize(Value)] = "\n";
            Matrix[1] = nullptr;

        }
        delete[] Value;
    }
    
    
#endif
