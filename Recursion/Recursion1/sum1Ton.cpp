#include<iostream>
using namespace std;
int sum1ToN(int num){
    if(num == 0){
        return 0;
    }
    return num + sum1ToN(num-1);
}

int main(){
    int value;
    cin>> value;
   cout<< sum1ToN(value);
}