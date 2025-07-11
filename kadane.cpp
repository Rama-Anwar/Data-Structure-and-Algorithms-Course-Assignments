#include <iostream>
using namespace std;



int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);

    int cs = 0;
    int largest = 0;

    for (int i = 0; i < n; i++){
        cs += arr[i];
        if (cs < 0){
            cs = 0;
        }

        largest = max(largest, cs);
    }
    cout << "the biggest sum is: " << largest;
    
}