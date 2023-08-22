#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){

        bool swapped = false;
        for(int j = 0; j < size - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped = false){
            break;
        }
    }

}

int main(){
    int arr[6] = {5,6,3,9,2,8};

    bubbleSort(arr,6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}