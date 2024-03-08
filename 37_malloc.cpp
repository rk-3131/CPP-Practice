#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    // Allocating the memory using malloc
    // malloc stands for memory allocation and hence it will be used to allocate the memory such that we can use it after it has been allocated

    int* variable1 = (int*) malloc(sizeof(int));

    // Here we have tried to allocate the memory
    // If the memory is allocated successfully then it will return the memory location and if it is not allocated then it will return null pointer

    if (variable1 == nullptr){
        cout<<"There is some problem while allocating the value to the variable"<<endl;
        return 1;
    }

    *variable1 = 101;
    // Here we have used the asterisk symbol and hence we can use that for the purpose of assiging the value to the variable as asterisk will be used to assign and access the value at that location and & is used to get the actual memory location at that point

    cout<<"Value of the variable is "<<*variable1<<endl;
    // here * is used to get the actual value at that location
    free(variable1);
    // free is used to free the memory so that it can be used by other variables

    int* variable2 = (int*) malloc(sizeof(int));

    if (variable2 == nullptr){
        cout<<"There is some problem while allocating the memory"<<endl;
        return 1;
    }

    *variable2 = 545;
    cout<<"Another variable has been given dynamic memory allocation and hence there is some value associated with the address "<<*variable2<<endl;

    free(variable2);

    return 0;
}