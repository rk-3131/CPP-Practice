#include<iostream>
#include<string>
using namespace std;

union my_union{
    int age;
    string name;
    int marks;
};

int main(){
    union my_union rk;
    rk.name = "Radhakrushna Mahadik";
    cout<<"Name is "<<rk.name<<endl;

    // rk.age = 70;
    // cout<<"Age of the "<<rk.name<<"is "<<rk.age<<endl;
    return 0;
}