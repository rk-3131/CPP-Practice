#include<iostream>
using namespace std;


int binary_search(int arr [], int target, int start, int end){
    if (start > end){
        return -1;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == target){
        return mid;
    }
    else if (arr[mid] < target){
        return binary_search(arr, target, mid + 1, end);
    }
    return binary_search(arr, target, start, mid - 1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binary_search(arr, 1, 0, size(arr) - 1);
    return 0;
}