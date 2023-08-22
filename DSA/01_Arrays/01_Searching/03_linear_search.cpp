#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10] = {33, 21, 10, 17, 72, 88,11, 1, 8, 99};

    int key;
    cin >> key;

    bool found = linearSearch(arr,10,key);

    if(found){
        cout << "Key found" << endl;
    }

    else{
        cout << "Key not found" << endl;
    }
}