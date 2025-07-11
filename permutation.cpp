#include<iostream>
using namespace std;

void permutation(string s, int i){

    if(i == s.size()){
        cout << s << ", ";
        return;
    }
    for(int j = i; j < s.size(); j++){
        swap(s[j], s[i]);
        permutation(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    permutation(s, 0);
}