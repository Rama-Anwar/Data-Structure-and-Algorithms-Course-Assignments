#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

void findingSubset(char input[], char output[], int i, int j, vector<string> & arr){
    if(input[i] == '\0'){
        output[j] = '\0';
        string temp(output);
        arr.push_back(temp);
        return;
    }
    output[j] = input[i];
    findingSubset(input, output, i + 1, j + 1, arr);
    findingSubset(input, output, i + 1, j, arr);


}

int main(){
    char input[100];
    char output[100];
    vector<string> arr;
    cin >> input;
    findingSubset(input, output, 0, 0, arr);
    sort(arr.begin(), arr.end(), compare);
    for(auto x : arr){
        cout << x << ", ";
    }
}