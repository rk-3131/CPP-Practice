#include<iostream>
using namespace std;

class MyOverloader{
    private:
        int real;
        int imaginary;

    public:
        MyOverloader(int real, int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        // Here we will be loading the +, -, /, and * operator

        // Lets just first go with overloading the + operator
        MyOverloader operator+(const MyOverloader& obj){
            return MyOverloader(real + obj.real, imaginary + obj.imaginary);
        }

        MyOverloader operator-(const MyOverloader& obj){
            return MyOverloader(real - obj.real, imaginary - obj.imaginary);
        }

        friend ostream& operator<<(ostream& os, const MyOverloader& obj){
            os << obj.real <<" + "<<obj.imaginary<<"i"<<endl;
            return os;
        }

};


int main(){
    MyOverloader o1(10, 10);
    MyOverloader o2(50, 50);

    cout<<o1 + o2<<endl;
    return 0;
}