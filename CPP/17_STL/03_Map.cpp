#include <iostream>
#include <map>
using namespace std;

//Maps are associative containers that store paired data. These paired data are called key-value pairs, where key is unique but value is not.

int main(){
    // map<int,string> student {
    //     {1,"Shubham"},
    //     {2, "Milan"},
    //     {3, "Anil"},
    //     {4, "Anil"}

    // };

    map<int, string> student;
    student[1] = "Shubham";
    student[2] = "Milan";
    student.insert(make_pair(3,"Shubham"));
    student.insert(make_pair(4,"Anil"));
    student[5] = "Abhinav";
    // student[5] = "Shreya";


    // for(int i = 1; i <= student.size(); i++){
    //     cout << "Student[" << i << "]: " << student[i] << endl;
    // }

    cout << "1 : " ;
    map<int,string>::iterator iter;
    for(iter = student.begin(); iter != student.end();iter++){
        cout << (*iter).first << " - " << iter->second << endl;
    }

    student.erase(student.find(2), student.find(5));

    cout << endl;
    cout << "2 : " ;

    for(iter = student.begin(); iter != student.end();iter++){
        cout << (*iter).first << " - " << iter->second << endl;
    }
}