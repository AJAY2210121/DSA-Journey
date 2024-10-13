#include<iostream>
using namespace std;
int print1ToN(int x, int n){
    if (x > n) return 0;
    cout<< x << endl;
    print1ToN(x+1 , n);
}
int main(){
    int num;
    cin>> num;
    print1ToN(1 , num);

}