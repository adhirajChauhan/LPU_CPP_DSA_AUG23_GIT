#include <iostream>
using namespace std;

/*
Exception are run time anomalies or unusual conditions that a program may encounter during execution.

Two types - 1. Synchronous -> The exceptions which occur during the program execution due to some falult in input data. -> out of range, division bby zero

2. -> Asynchronous -> The exceptions caused by events or faults unrelated to program and beyond the control of program -> keyboard failure, disk failure

We only deal with synchronous

1 -> Detect the problem (Hit the exception)
2 -> Inform that an error has been detected (Throw the exception)
3 -> Receive error information (Catch the exception)
4 -> Take corrective actions (Handle the exception)

Exception handling mechanism basically builds upon three keyword
    -> try
    ->throw
    ->catch


1- TRY

this keyword is used to preface a block of statements which may generate exception.

    try{
        statement1;
        statement2;
    }

2- THROW

when the exception is detected, it is thrown using 'throw' statement block in the block.

    throw(excep);

3- CATCH

this block catches the exceptions and handles it approrpiately. The catch block that catckes the exception must immediately floow the try block that throws the exception.

    try{
        statement1;
        statement2;
    }
    catch(argument){
        handle/action to be taken
    }
*/

int main(){
    //EXAMPLE 1
    // int a, b;
    // cout << "Enter values os a and b : ";
    // cin >> a >>b;

    // try{
    //     if(b!=0) cout << a/b;

    //     else throw b;
    // }

    // catch(int e){
    //     cout << "Division by zero : " << e << endl;
    // }


    //EXAMPLE 2

    int arr[5] = {1,2,3,4,5}, i;

    try{
        i = 0;
        while(1){
            if(i!=5) 
            {
                cout << arr[i] << endl;
                i++; 
            }
            else{
                throw i;
            }
        }
    }

    catch(int e){
        cout << "Array index was out of bounds " << e << endl;
    }


}