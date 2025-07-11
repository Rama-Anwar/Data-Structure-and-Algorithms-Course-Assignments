#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int e){
    int i =  s;
    int m = (s + e)/2;
    int j = m + 1;
    vector<int> temp;

    while(i <= m and j <= e){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= m){
        temp.push_back(arr[i++]);
    }
    while(j <= e){
        temp.push_back(arr[j++]);
    }

    int k = 0;
    for(int index = s; index <= e; index++){
        arr[index] = temp[k++];
    }
}


void mergeSort(int arr[], int s, int e){
    int mid = (s + e)/2;

    if(s >= e){
        return;
    }

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    return merge(arr, s, e);
}

int main(){
    int arr[] = {10, 5,2, 0, 7, 6, 4};
    int n = sizeof(arr)/ sizeof(int);
    mergeSort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}