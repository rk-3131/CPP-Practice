#include<iostream>
#include<string>
using namespace std;


struct my_strucure{
        int roll_no;
        string name; 
        float marks;
    };


int main(){
    // struct my_strucure rk;
    // It can be initialized as given in the upper section as well as it can also be initialized in the below section as well

    my_strucure rk;
    rk.roll_no = 72;
    rk.name = "Radhakrushna Mahadik";
    rk.marks = 100;

    cout<<"Name is "<<rk.name<<endl;
    cout<<"Roll number is "<<rk.roll_no<<endl;
    cout<<"Marks are "<<rk.marks<<endl;

    /*
    structures are defined as 
    struct structure_name {
        datatype_1 var1;
        datattype_2 var2;
        datatype_3 var3;
    };

    now we will go to main function and first create the reference variable that can access the elements in the structure

    Structure_name variable_name;
    now the variable is defined as the type of the structure

    variable_name.name_of_variable = value

    above line of code then will be used to store and use the values in the structure
    */
}