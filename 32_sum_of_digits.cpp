#include<iostream>
using namespace std;

int getSum(int number, int ans){
    if (number == 0){
        return ans;
    }

    int rem = number % 10;
    ans += rem;
    return getSum(number / 10, ans);
}
int main(){
    cout<<getSum(12345, 0);
    return 0;
}