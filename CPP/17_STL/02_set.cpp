#include <iostream>
#include <set>
using namespace std;

//Set - they store UNIQUE elements of SAME TYPE in a SORTED manner.
// Immutable - we can add or remove elements from a set but we can't change the values of existing elements.


int main(){
    // set<int> mySet = {5,3,8,1,3};
    // set<int, greater<int>> mySet = {5,3,8,1,3};

    // mySet[2] = 80;


    set<int> mySet;

    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(2);
    mySet.insert(3);

    cout << "Set before deletion -> ";
    for(auto val : mySet){
        cout << val << " ";
    }
    mySet.erase(4);
    // mySet.clear();
    cout << endl;
    cout << "Set after deletion -> ";
    for(auto val : mySet){
        cout << val << " ";
    }
    cout << endl;
    cout << mySet.size();
    cout << endl;
    cout << mySet.empty();

}