#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the number of line : ";
    cin>>n;
    for ( i = 1; i <= n; i++){
        for ( j = 1; j<=n-i; j++){
            cout<<" ";
        }
        for ( k = 0; k < 2*i-1; k++){
            cout<<"*";
        }    
        cout<<endl;
    }
    

} 
