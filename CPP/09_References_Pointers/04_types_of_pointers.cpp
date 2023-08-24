#include<iostream>
using namespace std;


int main(){

//1
//Null pointers - which is pointing to nothing, if we don't have the adress to be assigned to a pointer, we can use NULL
    // int *p; //containg garbage value
    // int *p = NULL;
    // cout << p;

//2
//Double pointers - we can create a pointer that in turn may point to data or another pointer

// int a = 5;
// int *p = &a;
// int **q = &p;

// cout << &a << endl;
// cout << p << endl;
// cout << *q << endl;
// cout << endl;

// cout << &p << endl;
// cout << q << endl;
// cout << endl;

// cout << a << endl;
// cout << *p << endl;
// cout << **q << endl;

//3
//void ponters - it is a generic pointer, it has no associated type with it. A void pointer can hold an address of any type.

//void pointers cannot be derefernced, it can be done using typecasting the void pointer

// double i = 5;
// void *ptr = &i;


//4
//wild pointers -  when a pointer is declared but not initialized. they point at a random memory location

// int a = 5;
// int *p;

// cout << *p << endl;

//5
//Dangling pointers - a pointer pointing towards a memory location that has been deleted

}