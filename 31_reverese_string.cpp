#include<iostream>
using namespace std;

string rev(string str, string ans, int index){
    if (index == -1){
        return ans;
    }

    char ch = str.at(index);
    ans += ch;
    return rev(str, ans, index - 1);
}
int main(){
    cout<<rev("Radhakrushna", "", 11);
    return 0;
}