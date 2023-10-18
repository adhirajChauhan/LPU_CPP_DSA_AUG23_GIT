#include <iostream>
#include <set>
using namespace std;

//Set - they store UNIQUE elements of SAME TYPE in a SORTED manner.
// Immutable - we can add or remove elements from a set but we can't change the values of existing elements.


int main(){
    set<int, greater<int>> mySet = {5,3,8,1,3};

    // mySet[2] = 80;
    for(auto val : mySet){
        cout << val << " ";
    }
}