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
    //Make a dinamic grow array and insert valeu
    void growArray(string **Matrix, string * Value){
        if(getsize(Matrix) > 0) {
            for (int i = 0; i < getsize(Matrix) + 1; i++)
            {



            }
        } else {
            delete[] Matrix[0];
            
            Matrix[0] = new string [getsize(Value) + 1];

            for (int i = 0; i < getsize(Value); i++)
            {
                Matrix[0][i] =Value[i];

                Matrix[0][getsize(Value)] = "\n";

                Matrix[1] = nullptr;
            }

        }

    }
    
    
#endif
