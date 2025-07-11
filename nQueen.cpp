#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<vector<int>>& arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
        
    }
    cout << endl;
}

bool checkSafety(vector<vector<int>> &arr, int n, int x, int y){
    for(int i = 0; i < x; i++){
        if(arr[i][y] == 1){
            return false;
        }
    }
    int i = x;
    int j = y;
    while(i >= 0 && j >= 0){
        if(arr[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }
    int a = x;
    int b = y;
    while(b < n && a >= 0){
        if(arr[a][b] == 1){
            return false;

        }
        a--;
        b++;
    }
    return true;
}

int nQueen(vector<vector<int>> & arr, int n, int i){
    // base case:
    if(i == n){
        printArray(arr, n);
        return 1;
    }
    //recursion: 
    int ways = 0;
    for(int j = 0; j < n; j++){
        if(checkSafety(arr, n, i, j)){
            arr[i][j] = 1;
        
            ways += nQueen(arr, n, i+1);
            arr[i][j] = 0;
        }   

 
    }
    return ways;

}

int main(){
    int n;
    cout << "Enter the number of rows and cols: ";
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n , 0));
    cout << nQueen(arr, n, 0);

}