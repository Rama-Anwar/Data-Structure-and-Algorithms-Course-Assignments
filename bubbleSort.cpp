#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
}

void bubbleSortRecursive(int arr[], int n){
    if(n == 1){
        return;
    }
    for(int j = 0; j < n - 1; j++){
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
    }
    bubbleSortRecursive(arr, n - 1);
}


void bubbleSortRecursive2(int arr[], int n, int j){
    if(n == 1 or n==0){
        return;
    }
    if(j == n-1){
        bubbleSortRecursive2(arr, n-1, 0);
        return;
    }

    if(arr[j] > arr[j+1])
        swap(arr[j], arr[j+1]);

    bubbleSortRecursive2(arr, n, j + 1);
}


int main(){
    int arr[] = {3,-2,1,60,-5};
    int n = sizeof(arr) / sizeof(int);
    bubbleSortRecursive2(arr, n, 0);
    for(int i = 0; i < n; i++){
        cout << arr[i] <<", ";
    }

}