#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){
        //1 mid
        if(arr[mid] == key){
            return mid;
        }

        //2 right
        if(key > arr[mid]){
            start = mid+1;
        }
        //3 left
        else{
            end = mid-1;
        }

        mid = (start+end)/2;

    }

    return -1;
}

int main(){
    int evenArr[6] = {2,4,5,7,8,9};
    int oddArr[5] = {2,3,4,5,6};

    int evenIndex = binarySearch(evenArr, 6, 9);
    cout << "Index of 9 is : " << evenIndex << endl;

    int oddIndex = binarySearch(oddArr, 5, 5);
    cout << "Index of 5 is : " << oddIndex << endl;
}