#include<iostream>
using namespace std;

pair<int, int> staircaseSearch(int arr[][4],int n, int m, int key){
    int i = 0;
    int j = m - 1;
    int start = arr[i][j];

    if(key < arr[0][0] or key > arr[n-1][m-1]){
        return {-1,-1};
    }

    while (i < n and j >= 0){
        if ( arr[i][j] == key){
            return {i, j};
        }
        else if(arr[i][j] > key){
            j--;
        }

        else{
            i++;
        }

    }
    return {-1,-1};
}

int main(){
    int arr[][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int n = 4, m = 4;
    pair<int, int> index = staircaseSearch(arr, n, m, 33);
    cout << index.first << ", " << index.second; 
    return 0;
}