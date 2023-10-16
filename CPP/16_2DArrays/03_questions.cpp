#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col){

}

int wavePrint(int arr[][4], int row, int col){
    for(int col = 0; col < 4; col++){
        if(col%2==1){
            for(int row = row - 1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}

void spiralPrint(int arr[][3], int row, int col){
    int topRow = 0, bottomRow = row - 1;
    int leftCol = 0, rightCol = col - 1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        //print top row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        //print right col
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        for(int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    cout << "Element to search : ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3,4)){
        cout << "Present" << endl;
    }
    else{
        cout << "Not present" << endl;
    }

    
}