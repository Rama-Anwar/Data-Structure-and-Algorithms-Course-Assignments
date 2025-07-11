#include<iostream>
using namespace std;

void print(int arr[][10], int n, int m){
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = m -1;

    while(startRow <= endRow and startCol <= endCol){
        for(int col = startCol; col <= endCol; col++){
            cout << arr[startRow][col] << " ";
        }
        for(int row = startRow + 1; row <= endRow; row++){
            cout << arr[row][endCol] << " ";
        }
        for(int col = endCol - 1; col >= startCol; col-- ){
            if(startRow == endRow){
                break;
            }
            cout << arr[endRow][col] << " ";
        }
        for(int row = endRow -1; row > startRow; row--){
            if(startCol == endCol){
                break;
            }
            cout << arr[row][startCol] << " ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main(){
    int arr[][10] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n = 3, m=4;
    print(arr, n, m);
}