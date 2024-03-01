#include <iostream>
using namespace std;

int main(){
    int age = 40;

    if (age < 18){
        cout<<"Your are minor"<<endl;
    }else if (age < 50){
        cout<<"You are young"<<endl;
    }else{
        cout<<"You are old now"<<endl;
    }
}