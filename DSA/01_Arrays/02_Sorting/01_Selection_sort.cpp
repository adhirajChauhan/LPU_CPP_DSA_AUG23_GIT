#include <iostream>
using namespace std;

//find min element in entire array and place it at it's correct index

void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){

        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arr[6] = {4,2,6,3,9,8};

    selectionSort(arr, 6);

    for(int i = 0; i < 6;i++){
        cout << arr[i] << " ";
    }
}