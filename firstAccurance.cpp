#include<iostream>
using namespace std;

int firstAccurance(int arr[], int n, int key){
    if(n == 0){
        return -1;
    }
    if(arr[0] == key){
        return 0;
    }
    int subindex = firstAccurance(arr + 1, n - 1, key);
    if(subindex != -1){
        return subindex + 1;
    }
    return -1;
}

int lastOccurance(int arr[], int n, int key){
    if(n == 0){
        return -1;
    }
    int subindex = lastOccurance(arr + 1, n -1, key);
    if(subindex == -1){
        if(arr[0] == key){
            return 0;
        }
        return -1;
    }
    else{
        return subindex + 1;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);
    int key = 1;
    cout << firstAccurance(arr, n, key);
}