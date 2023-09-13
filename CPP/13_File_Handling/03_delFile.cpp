#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    int val = remove("newFile.txt");

    if(val == 0){
        cout << "File deleted" << endl;
    }
    else{
        cout << "File not deleted" << endl;

    }

}