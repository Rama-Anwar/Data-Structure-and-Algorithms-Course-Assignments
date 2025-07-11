#include<iostream>
#include<vector>
using namespace std;

void countingSort(int arr[], int n){
    // get the max num
    int range = arr[0];
    for(int i = 0; i < n; i++){
        range = max(range, arr[i]);
    }
    vector<int> count(range+1, 0);
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    int j = 0;
    for(int i = 0; i <= range; i++){
        while(count[i] > 0){
            arr[j] = i;
            count[i]--;
            j++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ,";
    }
}

int main(){
    int arr[] = {4,2,5,1,0};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
}