#include<iostream>
using namespace std;


bool isPrime(int number){
    int c = 2;

    while (c * c <= number){
        if (number % c == 0){
            return false;
        }
        c++;
    }
    return true;
}

int main(){
    int number = 37;

    if (isPrime(number) == true){
        cout<<"Yes the number "<<number <<" is prime number"<<endl;
    }else{
        cout<<"No the number "<<number<<" is not a prime number"<<endl;
    }
    return 0;
}