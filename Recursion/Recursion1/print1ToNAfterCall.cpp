#include<iostream>
using namespace std;
int print1ToN( int n){
    if ( n == 0) return 0; // base codition
    print1ToN( n-1); // call
    cout<< n << endl;  // output
}
int main(){
    int num;
    cin>> num;
    print1ToN(num);

}