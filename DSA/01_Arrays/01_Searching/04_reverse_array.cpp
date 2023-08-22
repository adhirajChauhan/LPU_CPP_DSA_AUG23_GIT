#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int evenArr[6] = {2,4,3,1,6,7};

    int oddArr[5] = {3,2,5,6,4};

    cout << "Before reverse : " ;
    printArray(oddArr,5);

    // reverse(evenArr, 6);
    reverse(oddArr,5);
    
    cout << "After reverse : " ;
    // printArray(oddArr,6);
    printArray(oddArr, 5);

}



// You are given an array of integers, arr, containing n elements. Write a C++ function int linearSearch(int arr[], int n, int target) to perform a linear search and find the index of the first occurrence of the target element within the array. If the target element is not found, the function should return -1.