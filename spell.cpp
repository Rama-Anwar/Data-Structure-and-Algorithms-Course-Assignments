#include<iostream>
using namespace std;

void spell(int n){
    string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n == 0){
        return;
    }
    int lastDigit = n % 10;
    spell(n / 10);
    cout << num[lastDigit] << ", ";
}

int main(){
    spell(2021);
    return 0;
}