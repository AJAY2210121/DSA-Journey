#include<iostream>
using namespace std;
int sum(int x , int num){
     if (num==0) return x;
     sum(x+num , num-1);
}
int main(){
    int n;
    cin>> n;
    cout<< sum(0 , n);
}