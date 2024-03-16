#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int var = 100;
    int p = 3.142;
    cout<<"This is where I will insert new line"<<endl;
    cout<<setw(10)<<"and this is width"<<endl;
    cout<<setprecision(3)<<p<<endl;
    cout<<setbase(8)<<var<<endl;

    /*
    endl is used to add the new line at the end of the code output
    setw is used to set the empty space as we specify in the paranthesis 
    setprecision is used to set the precision of the numerical value that we will be putting there
    setbase is used to convert the number in the decimal form into any base we want to and hence we can print it in that form only
    */

    return 0;
}