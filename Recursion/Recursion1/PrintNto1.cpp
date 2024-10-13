#include<iostream>
using namespace std;

int printValueTo1(int n){
    if(n > 0){
        cout<< n <<" ";
        return printValueTo1(n-1);
    }
}
int main(){
    int value;
    cin>>value;
    printValueTo1(value);
    return 0;
}