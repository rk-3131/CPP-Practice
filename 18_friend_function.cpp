#include<iostream>
#include<string>
using namespace std;


class BaseClass{
    private:
        string name;
        int marks;
    
    public:
        BaseClass(string name, int marks){
            this->name = name;
            this->marks = marks;
        }

        
    // Here we will define the friend function which will be able to access all the methods and variables which are private 

    friend void my_friend(BaseClass& obj);
};

void my_friend(BaseClass& obj){
    cout<<"Name of student is "<<obj.name<<endl;
    cout<<"Marks obtained by student is "<<obj.marks<<endl;
}
int main(){

    BaseClass o1("Radhakrushna Mahadik", 100);

    my_friend(o1);
    
    return 0;
}