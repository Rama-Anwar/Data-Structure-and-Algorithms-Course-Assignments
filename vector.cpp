#include<iostream>
#include "Vector.h"
using namespace std;



int main(){
    Vector<int> v;
    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
    cout<<"the capacity is: " << v.capacity() <<endl;
    return 0;
}
