#include<iostream>
using namespace std;


bool isSorted(int arr[], int n){
    if(n == 0 or n == 1){
        return true;
    }
    if(arr[0] <= arr[1] and isSorted(arr + 1, n - 1)){
        return true;
    }
    return false;
}


int main(){
    int arr[] = {1,3,4,6,7,8,8};
    int n = sizeof(arr) / sizeof(int);
    cout << isSorted(arr, n);
    return 0;
}