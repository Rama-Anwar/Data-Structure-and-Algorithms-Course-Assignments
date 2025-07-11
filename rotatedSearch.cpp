#include<iostream>
#include<vector>
using namespace std;

int rotatedSearch(vector<int> arr, int key){
    int s = 0;
    int n = arr.size();
    int e = n - 1;

    while(s <= e){
        int m = (s + e) / 2;
        if (arr[m] == key){
            return m;
        }
        if (arr[m] >= arr[s]){
            if(key >= arr[s] and key <= arr[m]){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
        }
        else{
            if(key >= arr[m] and key <= arr[e]){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {3,4,5,6,7,8,9,1,2};
    int key;
    cout << "Enter the key: ";
    cin >> key;
    cout << rotatedSearch(arr, key);
    return 0;
}