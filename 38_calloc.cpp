#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    
    int* array_pointer = (int*) calloc(10, sizeof(int));

    if (array_pointer == nullptr){
        cout<<"There was some error while allocating the memory allocation"<<endl;
        return 0;
    }

    for (int i = 0; i < 10; i++){
        cout<<array_pointer[i]<<" ";
    }
    return 0;
}