#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int smallest = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ,";
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
}