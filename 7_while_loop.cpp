#include <iostream>
using namespace std;

int main(){
    cout<<"Print the numbers from 1 to 100";

    int i = 1;

    while(i <= 100){
        if (i == 50 || i == 70){
            i++;
            continue;
            // continue is used to skip the execution of the program for that iterration and its control goes at the beginning of the program where the code is and where is will start executing
        }
        cout<<i<<" ";
        i++;
    }

    return 0;
}