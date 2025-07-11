#include<iostream>
using namespace std;

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    return a * power(a, b - 1);
}

int powerOptimized(int a, int b){
    if(b == 0){
        return 1;
    }
    int power = powerOptimized(a, b/2);
    int powerSquared = power * power;

    if(b & 1){
        return a * powerSquared;
    }
    return powerSquared;
}

int main(){
    int a = 2;
    int b = 4;
    cout << powerOptimized(a, b);
}