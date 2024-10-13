#include<iostream>
using namespace std;
int powLog(int Base, int Exponent){
    if(Exponent == 0) return 1;
    if(Exponent == 1) return Base;
    int subValue = powLog(Base, Exponent/2);
    if(Exponent % 2 == 0) return subValue*subValue;
    else return subValue*subValue*Base;
}
int main(){
    int Base, Exponent;
    cout<<"Enter Base and Exponent : ";
    cin>> Base>> Exponent;
    cout<< powLog(Base, Exponent);


}