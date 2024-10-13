#include<iostream>
using namespace std;
int main(){
    int n,i,c,j,k;
    cout<<"enter the no. of line : ";
    cin>>n;
    int a=1;
    int b=0;
    for ( i =0;i<n;i++){
        for ( j = 0; j <= i; j++)
        {
          if (i==j || (i+j)%2==0) cout<<a;
          else cout<<b;
        }
        cout<<endl;
    }
       
}