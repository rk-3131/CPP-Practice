#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;

    public:
        Complex(int real, int img){
            this->real = real;
            this->img = img;
        }

        Complex operator+(const Complex& obj){
            return Complex(real + obj.real, img + obj.img);
        }

        Complex operator-(const Complex& obj){
            return Complex(real - obj.real, img - obj.img);
        }

        friend ostream& operator<<(ostream& os, const Complex& obj){
            os << obj.real << " + " << obj.img <<" i ";
            return os;
        };
};

int main(){
    Complex c1(55,55);
    Complex c2(100, 100);

    Complex sub = c2 - c1;
    Complex add = c2 + c1;

    cout<<sub<<endl;
    cout<<add<<endl;
    
    return 0;
}