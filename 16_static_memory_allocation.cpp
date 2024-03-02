#include<iostream>
#include<string>
using namespace std;


class Student{
    public:
        static int count;
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


void Student :: setName(string name){
    this->name = name;
    Student :: count++;
}

int Student :: getCount(){
    return Student :: count;
}
