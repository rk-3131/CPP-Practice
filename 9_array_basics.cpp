#include<iostream>
using namespace std;

int main(){
    cout<<"This is where we will define the array of the integer and then we will be traversing the array"<<endl;

    int arr [] = {1,2,3,4,6,6,7,8,9,10};
    // This is the one way of defining and declaring the array at one time only and then there are other ways also

    for (int i = 0; i < size(arr); i++){
        cout<<"Element at the index "<<i<<" is "<<arr[i]<<endl;
    }

    // we can also define the array based on the input at that index only

    int arr2 [5];
    arr2[0] = 100;
    arr2[1] = 200;
    arr2[2] = 300;
    arr2[3] = 400;
    arr2[4] = 500;

    cout<<"Now we will be accessing the elements of the array using loops"<<endl;

    for (int i = 0; i < size(arr2); i++){
        cout<<"Element at the index "<<i<<" is "<<arr2[i]<<endl;
    }

    // now we will learn how to access the element of the array automatically
    for (auto &&i : arr)
    {
        cout<<i<<endl;
    }

    for (auto &&i : arr2){
        cout<<i<<endl;
    }
    
    return 0;

    /*
    to access the elements of the array using the auto loop is simple

    for (auto &&variable : arr_name){
        cout<<variable<<endl;
    }
    
    */
}