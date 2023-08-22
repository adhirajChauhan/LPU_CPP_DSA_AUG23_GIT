#include <iostream>
using namespace std;

int main(){
    //Array stores multiple values of same type of elements that have contiguous memory location in a single variable

    //------------------------------------------------------------------------
    // int var = 5;

    // int arr[5]; //array declare

    // char arrChar[5] = {'a', 'b', 'c', 'd', 'e'};

    // int arr[5] = {1,2,3,4,5};
    // cout << "Before changing : " << arr[3] << endl;
    // arr[3] = 10;
    // cout << "After changing : " << arr[3];


    // string arr[5] = {"Earth", "Mars", "Jupiter", "Venus", "Mercury"};

    // int sizeOfArr = sizeof(arr)/sizeof(int);

    // for(int i = 0; i < sizeOfArr; i++){
    //     cout << i << " : " << arr[i] << endl;
    // }

    // for(auto i : arr){
    //     cout << i << endl;
    // }

    //------------------------------------------------------------------------
    //Taking user input, store them in an array and print them out

    int arr[5];

    cout << "Enter numbers" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr[i];
    }

    cout << "The numbers are -> ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    //Display sum of all the numbers given by user

    //Also display the average of all the inputs

}