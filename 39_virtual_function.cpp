#include<iostream>
using namespace std;

class BaseClass{
    public:
        virtual void show(){
            cout<<"This is show in the base class"<<endl;
        }

        void printFunction(){
            cout<<"This is print inside the base class"<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        void show(){
            cout<<"This is show inside of the derived class"<<endl;
        }
        void printFunction(){
            cout<<"This is print inside of the derived class"<<endl;
        }
};

int main(){

    BaseClass* bptr;
    // Here we have defined the base class pointer which is used to get and access the member function

    DerivedClass obj;
    // Here object of the derived class has been created and hence we can use this object for the runtime polymorphism

    bptr = &obj;
    // BasePointer will have memory access to the derived class object memory

    bptr->show();
    obj.show();
    // As show function is declared as virtual hence we can use the runtime polymorphism to the derived class
    // Even if we use the base class pointer or the derived class object we can use the code and hence every time only derived class object can be called here in

    bptr->printFunction();
    obj.printFunction();
    // But as printFunction is not declared as virtual hence it can be from the base class or can be from the derived class and hence we can use them for the purpose of printing the derived class as well as base class method
    return 0;
}