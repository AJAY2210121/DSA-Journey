#include<iostream>
using namespace std;
int factorial(int x){
    // base case(condition)
    if (x == 1 || x == 0){
        return 1;
    }
    return x*factorial(x-1);    
}
int main(){
    int num;
    cin>> num;
    cout<< factorial(num);
}