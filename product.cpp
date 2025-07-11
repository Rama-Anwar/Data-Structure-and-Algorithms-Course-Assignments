#include<iostream>
using namespace std;

class Product{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    //constructor
    Product(){
        cout << "hello"<<endl;
    }

    //setters
    void setMrp(int price){
        if(price > 0)
            mrp = price;
    } 
    void setSellingPrice(int price){
        if(price >= mrp){
            selling_price = mrp;
        }
        else{
            selling_price = price;
        }

    }
    //getters
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){

        return selling_price;
    }


};


int main(){
    // camera is an object of Product class
    Product camera;
    camera.setMrp(100);
    camera.setSellingPrice(200);
    cout << "MRP of the camera is: " << camera.getMrp() << endl;
    cout << "Selling price of the camera is: " << camera.getSellingPrice() << endl;
    return 0;
}