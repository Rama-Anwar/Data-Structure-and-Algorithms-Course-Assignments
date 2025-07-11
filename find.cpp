#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int key = 10;
    int index;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    index = it - arr.begin();
    if (it == arr.end()){
        cout << "key does not exist"<<endl;
        return 0;
    }
    cout<<"this is the index: " << index;
    return 0;
    
}