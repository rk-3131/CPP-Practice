#include<iostream>
#include<string>
using namespace std;

// Here is the base class which is created
// There are private and protected data members present in the class
class Student {
    private:
        int roll_no;
        int marks;
        string name;

    public:
        void setName(string name);
        void setMarks(int marks);
        void setRollNo(int roll_no);

        friend void getAllInfo(Student& obj);
        // This is the friend function which will be used to get and use the access the private as well as protected memebers of the class hence we can access them
        // Friend function is passed with the object of the base class which it is going to acces the elements of 
};

void Student :: setRollNo(int roll_no){
    this->roll_no = roll_no;
}

void Student :: setMarks(int marks){
    this->marks = marks;
}

void Student :: setName(string name){
    this->name = name;
}

void getAllInfo(Student& obj){
    cout<<"Name of the student is "<<obj.name<<endl;
    cout<<"Roll number of student is "<<obj.roll_no<<endl;
    cout<<"Marks of student is "<<obj.marks<<endl;
}

int main(){
    Student s1;
    s1.setMarks(100);
    s1.setName("Radhakrushna Mahadik");
    s1.setRollNo(20123072);

    getAllInfo(s1);

    return 0;
}