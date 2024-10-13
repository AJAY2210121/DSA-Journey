#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter No. of lines : ";
    cin>>n;
    if(n%2!=0){
   for ( i = 1; i <= n; i++)
   {
    for ( j= 1; j <= n; j++)    
    {
        if (i==j || i+j==n+1)  cout<<"*";
        else cout<<" ";
    }
    cout<<endl;
   }
 }
    else cout<<"cross pattern is not possible.";
}