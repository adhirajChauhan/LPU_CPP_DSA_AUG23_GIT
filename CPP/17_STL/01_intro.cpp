#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

//STL - Standard Template Library
//Type of STL Containers
/*
    1. Sequential container - it allows us to store elements that can be accesed in sequential order eg - Array, List, Vector

    2. Associative Containers - It allows us to store elements in sorted order, the order doesn't depend upon when the element is inserted. eg - Set, Map, multiset, multimap

    3. Unordered Associative containers - it provides the unsorted version of associative containers. eg - unordered set, unordered map, unordered multiset, unordered multimap
*/

int main(){

    // vector<int> num = {1,2,3,4,5,5};

    // for(auto nums : num){
    //     cout << nums << " ";
    // }

    // set<int> num = {1, 9, 10, 7, 10};

    unordered_set<int> num = {2,5,6,55,31};
    for(auto nums : num){
        cout << nums << " ";
    }
}