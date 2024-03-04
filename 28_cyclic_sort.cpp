#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main(){

    int arr [] = {8,7,5,3,2,4,6,1,9};
    cout<<"Array before sorting"<<endl;

    for (int i = 0; i < size(arr); i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    int i = 0;

    while (i < size(arr)){
        if (arr[i] != i + 1){
            swap(arr, i, arr[i] - 1);
        }else{
            i++;
        }
    }

    cout<<"Array after sorting"<<endl;

    for (int i = 0; i < size(arr); i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    return 0;
}