template<typename T> 
class Vector{
    //data memebers
    T * arr;
    int cs;
    int ms;

public:
    Vector(int max_size = 1){
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void push_back(const T d){
        if (cs == ms){
            //create a new array and delete the new one and double the capacity of the new array
            T * oldArr = arr;
            ms *= 2;
            arr = new T[ms];
            for(int i = 0; i < cs; i++){
                arr[i] = oldArr[i];
            }
            delete [] oldArr;
            
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back(){
        if(cs > 0)
            cs--;
    }
    bool isEmpty() const{
        return cs==0;
    }
    T front() const{
        return arr[0];
    }
    T back() const{
        return arr[cs-1];
    }
    T at(int i) const{
        return arr[i];
    }
    int size() const{
        return cs;
    }
    int capacity(){
        return ms;
    }
    T operator[](const int i) const{
        return arr[i];
    }
    //good practice: you can make the function const if it does not change any variable
    //make the parameter const if it does not change in the function

};