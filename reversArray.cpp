#include <iostream>
using namespace std;

int reverseArray(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int reverseArray(int arr[], int n){
    int s = 0;
    int e = n -1;
    int mid = (s + e)/2;
    while (s < e){
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
        
    }
    return 0;
}