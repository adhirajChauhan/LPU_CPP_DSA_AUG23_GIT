#include <iostream>
#include <fstream>
using namespace std;

int main(){

    // ofstream file ("test.bin", ios::binary);
    // int p = 1234;
    // int q = 5678;

    // file.write((char*) &p, sizeof(p));
    // file.write((char*) &q, sizeof(q));

    ifstream file("test.bin", ios::binary);
    int p;
    cout << "Value of p before : " << p << endl;

    
    file.read((char*) &p, sizeof(p));
    cout << "Value of p after : " << p << endl;

    file.close();

}