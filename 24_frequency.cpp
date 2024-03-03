#include<iostream>
using namespace std;

int getFrequency(int number, int digit){
    int ans = 0;

    while (number > 0){
        int rem = number % 10;
        if (rem == digit){
            ans++;
        }
        number /= 10;
    }
    return ans;
}
int main(){
    int number = 1018112;
    int digit = 1;

    cout<<"Frequency of digit "<<digit<<" in a number "<<number<<" is "<<getFrequency(number, digit)<<endl;
    return 0;
}