#include<iostream>
using namespace std;

class Base{
    private:
        int a;
        int b;
    
    public:
        void setA(int a);
        void setB(int b);
        int getA();
        int getB();
};

void Base :: setA(int a){
    this->a = a;
}

void Base :: setB(int b){
    this->b = b;
}

int Base :: getA(){
    return a;
}

int Base :: getB(){
    return b;
}

class Child : public Base{
    private:
        int p;
        int q;

    public:
        Child(int p, int q){
            this->p = p;
            this->q = q;
        }

        int getSum(){
            return p + q;
        }

        int getSub(){
            return p - q;
        }

        int getMul(){
            return p* q;
        }

        int getDiv(){
            return p / q;
        }
};

int main(){

    Child c1(100, 50);

    cout<<"Sum of numbers is "<<c1.getSum()<<endl;
    cout<<"Subtraction of numbers is "<<c1.getSub()<<endl;
    cout<<"Multiplication of numbers is "<<c1.getMul()<<endl;
    cout<<"Division of numbers is "<<c1.getDiv()<<endl;
    // Here all the child class method are accessible using the child class object which is obvious 
    // Now we will try to access the methods which are there in the base class

    c1.setA(125);
    c1.setB(225);
    cout<<"Value of A in base class is "<<c1.getA()<<endl;
    cout<<"Value of B in base class is "<<c1.getB()<<endl;
    // Here child class object is able to access the elements at the base class also 
    // Hence we can make sure that this is applicable

    return 0;
}

