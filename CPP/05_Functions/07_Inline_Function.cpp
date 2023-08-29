/*

A function is used to reduce the code redudancy, as well as to save memory space. As it is invoked, a bunch of tasks are performed (matching arguments, matching return [happens intenally]),

but when function defination consist of hardly one or two statements, then this bunch of tasks appears to be time consuming, so to fix this we use the concept of inline functions.

When a function is declared inline, the "Function body" is replicated at function calling space

*/

#include <iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}

int main(){

    cout << "Sum : " << add(5,3);
    cout << "Sum : " << add(2,3);
    cout << "Sum : " << add(2,3);
    cout << "Sum : " << add(2,3);
    cout << "Sum : " << add(2,3);
    cout << "Sum : " << add(2,3);

}