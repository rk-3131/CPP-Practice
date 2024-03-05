#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;

    public:
        Complex(int real, int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        Complex operator+(const Complex& other){
            return Complex(real + other.real, imaginary + other.imaginary);
        }

        friend ostream& operator<<(ostream& os, const Complex& obj){
            os << obj.real<<" + "<<obj.imaginary<<"i";
            return os;
        };

};

int main(){
    Complex c1(10,10);
    Complex c2(10,10);

    Complex sum = c1 + c2;

    cout<<sum;

    return 0;
}