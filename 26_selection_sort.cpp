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

    for (int i = 0; i < size(arr); i++){
        int maxIndex = 0;
        int maxNumber = INT_MIN;
        int j = 0;

        while (j < size(arr) - i){
            if (arr[j] > maxNumber){
                maxNumber = arr[j];
                maxIndex = j;
            }
            j++;
        }

        swap(arr, maxIndex, j- 1);

    }

    // selection_sort(arr);

    cout<<"Array after sorting"<<endl;

    for (int i = 0; i < size(arr); i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}