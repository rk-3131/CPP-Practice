#include<iostream>
#include<string>
using namespace std;


class Student{
    public:
        static int count;
        // static member is defined here in the class and hence it will be used later as a universal variable 
        // If we change the object value of the static variable will change as it is not related to the object but it is related to the class
        string name;
    
    public:
        void setName(string name);
        int getCount();

};

int main(){
    Student s1;
    s1.setName("Radhakrushna Mahadik");
    cout<<s1.getCount()<<endl;

    Student s2;
    s2.setName("Piyush More");
    cout<<s1.getCount()<<endl;

    Student s3;
    s3.setName("Saurabh Nikam");
    cout<<s1.getCount()<<endl;

    Student s4;
    s4.setName("Avishkar Gaikwad");
    cout<<s1.getCount()<<endl;

    return 0;
}

int Student :: count = 0;
// Even we have declared the count as static variable we have to make sure that it will be initialized outside of the class as the value that we want it to get initialized


void Student :: setName(string name){
    this->name = name;
    Student :: count++;
}

int Student :: getCount(){
    return Student :: count;
}
