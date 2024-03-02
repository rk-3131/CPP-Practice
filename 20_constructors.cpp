#include<iostream>
using namespace std;

class MyClass{
    private:
        int value;
        int another_value;
    
    public:
        // This is the constructor which is taking values as input into the function and it is also assigning the values to the variables
        MyClass(int value, int another_value){
            this->value = value;
            this->another_value = another_value;
        }

        // Now we will create the copy constructor
        MyClass(MyClass& obj){
            this->value = obj.value;
            this->another_value = obj.another_value;
        }

        void display(){
            cout<<"First value is "<<this->value<<endl;
            cout<<"Another values is "<<this->another_value<<endl;
        }
};

int main(){
    MyClass o1(10,20);
    o1.display();

    MyClass o2(o1);
    o2.display();

    return 0;
}