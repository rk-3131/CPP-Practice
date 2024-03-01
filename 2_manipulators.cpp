#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int var = 100;
    int p = 3.142;
    cout<<"This is where I will insert new line"<<endl;
    cout<<setw(10)<<"and this is width"<<endl;
    cout<<setprecision(3)<<p<<endl;
    cout<<setbase(16)<<var<<endl;

    return 0;
}