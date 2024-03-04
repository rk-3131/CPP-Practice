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

    for (int i = 1; i < size(arr); i++){
        int j = i;

        while (j > 0){
            if (arr[j] < arr[j - 1]){
                swap(arr, j, j - 1);
            }
            j--;
        }
    }

    cout<<"Array after sorting"<<endl;

    for (int i = 0; i < size(arr); i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    return 0;
}