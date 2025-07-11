#include<iostream>
using namespace std;

int fastExponential(int a, int n){
    int ans = 1;
    while(n > 0){
        int lastBit = n & 1;
        if (lastBit){
            ans = ans * a;
        }
        a *= a;
        n = n >> 1;
    }
    return ans;
}


int main(){
    int a, n;
    cout << "type the integer and the power seperated by a space: ";
    cin >> a >> n;
    cout << fastExponential(a, n) << endl;
    return 0;
}