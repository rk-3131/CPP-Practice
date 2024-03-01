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
    return 0;
}