#include<iostream>
using namespace std;
int PreInPost(int n){
    if(n == 0) return;
    cout<<"Pre: "<< n<< endl;
    PreInPost(n-1);
    cout<<"In: "<< n<< endl;
    PreInPost(n-1); 
    cout<<"Post: "<< n<< endl;
    PreInPost(n-1); 

}
int main(){
    int num;
    cout <<"Enter no. : " ;
    cin>> num;
    PreInPost(num);
}
