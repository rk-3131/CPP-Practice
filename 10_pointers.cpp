#include<iostream>
using namespace std;

int main(){
    // pointers are the variables are which are used to store value of the memory location where that variable is stored so we can access that variable 

    int a = 100;
    // variable a is declared which will have certain space in the memory

    int *p = &a;
    // above line of code has defined the pointer p which is used to store the value of address of variable a

    cout<<"Value of variable is "<<a<<endl;
    cout<<"Value of pointer is "<<p<<endl;
    // You can see from the output that the p has value which is used to get the memery address of the value which is stored in there

    int **p2 = &p;
    cout<<"Variable p2 has address of "<<p2<<endl;

    cout<<"Value of variable a is "<<*(&a)<<" and its memory location is "<<&a<<endl;

    int arr [] = {1,2,3,4,5,6,7,8,9};

    // Accessing the elements of the array using pointers scheme

    int *ptr = arr;
    // Here arr does not need to have the referening sympbol as name of the array is itself a address to first element of the array hence we have not used the symbol of &there

    for (int i = 0; i < size(arr); i++){
        cout<<"Element at index "<<i<<" is "<<*(ptr + i)<<endl;
    }

    return 0;
}