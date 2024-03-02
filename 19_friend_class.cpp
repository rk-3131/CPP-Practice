#include<iostream>
#include<string>
using namespace std;

class BaseClass{
    private:
        string name;
        int rollNo;
        int marks;
    
    public:
        BaseClass(int rollNo, string name, int marks){
            this->rollNo = rollNo;
            this->name = name;
            this->marks = marks;
        }

    friend class AnotherClass;
};

class AnotherClass{
    public:
        void displayBase(BaseClass& obj){
            cout<<"Roll number of student is "<<obj.rollNo<<endl;
            cout<<"Name of student is "<<obj.name<<endl;
            cout<<"Marks obtained by student are "<<obj.marks<<endl;
        }
};


int main(){

    BaseClass b1(20123072, "Radhakrushna Mahadik", 100);

    AnotherClass a1;

    a1.displayBase(b1);

    return 0;
}