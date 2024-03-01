#include <iostream>
using namespace std;

int main(){
    int age = 50;

    switch (age){
        case 18:
            cout<<"You are 18 years old"<<endl;
            break;

        case 30:
            cout<<"You are 30 years old"<<endl;
            break;

        case 50:
            cout<<"You are 50 years old"<<endl;
            break;

        default:
            cout<<"You are not a special guy"<<endl; 
    }
    return 0;
}