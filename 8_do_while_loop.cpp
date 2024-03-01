#include <iostream>
using namespace std;

int main(){
    cout<<"Print the numbers from 1 to 1000"<<endl;

    int i = 1;
    do {
        cout<<i<<" ";
        if (i == 50){
            break;
            // break is used to terminate the loop and then takes the control of the program after the loop
        }
        i++;
    }while(i <= 100);
    return 0;
}