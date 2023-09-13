#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream inFile;
    ofstream onFile;

    char ch;

    inFile.open("file.txt");
    onFile.open("newFile.txt");

    while(inFile.get(ch)){
        onFile.put(ch);
    }

    inFile.close();
    onFile.close();

}