#include<iostream>
using namespace std;

int binaryConverter(int n){
    int power = 1;
    int ans = 0;

    while(n > 0){
        int lastBit = n & 1;
        if (lastBit){
            ans = ans + (power);
        }
        power *= 10;
        n = n >> 1;

    }
    return ans;
}


int main(){
    int n;
    cout << "Enter a number to be converted to binary: ";
    cin >> n;

    cout << binaryConverter(n) << endl;
    return 0;
}