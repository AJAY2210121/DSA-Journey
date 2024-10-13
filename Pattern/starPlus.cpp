#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter the no. of line : ";
    cin>>n;
    if(n%2!=0){
        for (int i = 1; i <= n; i++){
             for(j=1;j<=n;j++){
              if(i==(n/2 + 1)||j==(n/2 + 1)) cout<<"*";
             else cout<<" ";
         }
         cout<<endl;
        }
    }
    else
     {
        cout<<"Pattern is not possible";
     }
}