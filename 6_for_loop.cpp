#include<iostream>
using namespace std;

int main(){
    cout<<"Print the number fror 1 to 100"<<endl;

    for (int i = 1; i <= 100; i++){
        cout<<i<<" ";
    }
    
    // for as special syntax
    /*
    for (initialization, condition, increament/decrement){
        code that we will do
    }
    */

   /*
   if we want to use the for loop for the array then we can use the auto loop
   for (auto &&variable_name : array_name){
    cout<<variable_name<<endl;
   }
   */
    return 0;
}