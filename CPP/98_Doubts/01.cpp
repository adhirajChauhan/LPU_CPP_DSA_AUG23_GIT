#include <iostream>
#include <string>
using namespace std;

void printString(const char* str){
    for(int i = 0; str[i] != '\0'; i++){
        cout<<str[i];
    }
}

int main(){
    // const char* myString = "Hello World";

    // printString(myString);

    string name;
    cout << "Enter your name : " ;
    getline(cin, name);

    cout << name << endl;
}