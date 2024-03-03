#include<iostream>
using namespace std;

int main(){

    int number = 12321;
    int temp = number;
    int ans = 0;

    while (temp > 0){
        int rem = temp % 10;
        ans = ans * 10 + rem;
        temp /= 10;
    }

    if (ans == number){
        cout<<"The number "<<number<<" is palindrom"<<endl;
    }else{
        cout<<"The number "<<number<<" is not palindrome"<<endl;
    }
    return 0;
}