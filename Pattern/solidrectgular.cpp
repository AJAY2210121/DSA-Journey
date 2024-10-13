#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout<<"Enter No. of rows : ";
    cin>>n;
    cout<<"Enter No. of cols : ";
    cin>>m;
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j<= m; j++)   {
            cout<<"*";
        }
        cout<<endl;
    }
    
}