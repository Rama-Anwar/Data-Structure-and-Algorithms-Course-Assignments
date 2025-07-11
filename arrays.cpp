 #include <iostream>
 using namespace std;

int binarySearch(int arr[], int n, int key);
 int main(){
    int arr[] = {2, 4, 5, 6, 78, 88, 89, 97};
    int k;
    int n = sizeof(arr) / sizeof(int);
    cout << "enter the key: ";
    cin >> k;

    int index = binarySearch(arr, n, k);
    if (index != -1){
        cout << "The key was found at index: " << index;
    }
    else{
        cout << "The key does not exist in the array";
    }

 }

 int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n -1;
    while (e >= s){
        int mid = (s + e) / 2;
        if (arr[mid] != key){
            if (arr[mid] > key){
                e = mid - 1;
                continue;
            }
            s = mid + 1;
            continue;
        }
        return mid;
    }
    return -1;

 }



