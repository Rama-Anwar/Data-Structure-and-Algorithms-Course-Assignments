#include <iostream>
#include <cmath>
using namespace std;

int printSubArrays(int arr[], int pr[], int n);


int main(){

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);

    int pr[n] = {0};
    pr[0] = arr[0];
    for (int i = 1; i < n; i++){
        pr[i] = pr[i-1] + arr[i];
    }

    cout << printSubArrays(arr, pr, n);


}

int printSubArrays(int arr[], int pr[], int n){
    int largest = 0;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int sum = pr[j] - pr[i-1];
            largest = max(largest, sum);

            cout << endl;

        }
    }
    return largest;
}

int largest(int arr[], int n){
    int largest = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}