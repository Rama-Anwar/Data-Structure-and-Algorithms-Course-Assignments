#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a number to check if Even or Odd: ";
    cin >> x;

    if(x & 1){
        cout << "odd!";
    }
    else{
        cout << "even!";
    }

}