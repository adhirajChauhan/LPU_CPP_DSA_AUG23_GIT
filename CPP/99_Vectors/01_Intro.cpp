#include <iostream>
#include<vector>
using namespace std;


//vectors are used to store elements of similar data type.
//unlike array, the size of a vector can grow dynamically

int main(){
    vector<int> vector1 = {1,2,3,4,5};

    cout << "Original Vector -> ";
    for(auto i : vector1){
        cout << i << " ";
    } cout << endl;

    //Add element 
    vector1.push_back(6);
    vector1.push_back(7);

    //access
    // cout << "Element at 1 is : " << vector1.at(1) << endl;

    //change
    // vector1.at(1) = 22;
    cout << "Vector before deletion -> ";
    for(auto i : vector1){
        cout << i << " ";
    } cout << endl;

    //Delete
    vector1.pop_back();

    cout << "Updated Vector -> ";
    for(auto i : vector1){
        cout << i << " ";
    } cout << endl;
}