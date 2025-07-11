#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int n = arr[e];
    int i = s - 1;
    int j = s;
    while(j < e){
        if(arr[j] < n){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}

void quickSort(vector<int> &arr, int s, int e){
    if(s >= e){
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){
    vector<int> arr = {2,0,10,-1,5,7,6,4};
    int n = arr.size();
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
}