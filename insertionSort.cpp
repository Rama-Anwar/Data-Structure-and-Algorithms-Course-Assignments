#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev -= 1;
        }
        arr[prev + 1] = current;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " , ";
    }
}

int main(){
    int arr[] = {5,4,2,3,1};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
}