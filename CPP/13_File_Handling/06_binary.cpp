#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Employee{
    public:
    int id;
    char name[30];
    char address[50];

    Employee(){

    }

    Employee(int _id, string _name, string _address){
        id = _id;
        // name = _name;
        // address = _address;
        strcpy(name,_name.c_str());
        strcpy(address,_address.c_str());
    }

    void info(){
        cout << "ID : " << id << "\tName : " << name << "\tAddress : " << address << endl;
    }
};

void Create(Employee obj){

    ofstream file("details.dat", ios::binary | ios::app);
    file.write((char*) &obj, sizeof(obj));
    file.close();
}

void Read(){
    ifstream file("details.dat", ios::binary);

    Employee obj;
    while(file.read((char*) &obj, sizeof(obj))){
        obj.info();
    }
    file.close();

}

bool Update(int id, string add){

    bool found = false;
    fstream file("details.dat", ios::in | ios::out | ios::binary);
    Employee obj;

    while(file.read((char*)&obj, sizeof(obj))){

        if(obj.id == id){
            found = true;

            strcpy(obj.address, add.c_str());

            // file.seekg(file.tellg() - sizeof(obj), ios::beg);
            file.write((char*)&obj, sizeof(obj));

            break;
        }
    }
    return found;

}

int main(){

    Employee a(1, "ABC", "J&K");
    Employee b(2, "DEF", "Punjab");

    // Create(a);
    // Create(b);

    // Read();

    cout << Update(1, "Himachal");


}

