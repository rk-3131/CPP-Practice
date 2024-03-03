#include<iostream>
using namespace std;

int main(){
    int number = 5;
    int temp = number;
    int ans = 1;

    while (temp >= 1){
        ans *= temp;
        temp--;
    }
    cout<<"Factorial of a number "<<number<<" is "<<ans<<endl;
    return 0;
}