#include<iostream>
using namespace std;
int main() {
    int n,alfa;
    int j,i,k;
    cout<<"Enter number of Line : ";
    cin >>n;
    for ( i = 1; i < n; i++){
      for (j= 1; j < n-i; j++){
        cout<<" ";
        }
         alfa = 65;
      for (k = 1; k<=2*i -1 ;k++){
         cout<<(char) alfa;
         if (k+j>=n) alfa--;
         else alfa++;  
         }
        cout<< endl;
    }
}