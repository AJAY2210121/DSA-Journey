#include<iostream>
using namespace std;
int fibonacci(int num){
    if (num==1 || num==2) return 1;
    int leftFibo = fibonacci(num-1);
    int rightFibo = fibonacci(num-2);
    return leftFibo + rightFibo;
    // return fibonacci(num-1) + fibonacci(num-2);
}
int main(){
    int position;
    cout<<"Enter length of Fibonacci series : ";
    cin>> position;
    fibonacci(position);
}