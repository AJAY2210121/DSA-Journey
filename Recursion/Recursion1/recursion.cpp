#include<iostream>
using namespace std;

void defRecursion(int x){
    cout<<"Good Morning"<< endl;
}

int main(){
    int x;
    cin>>x;
    defRecursion(x);
}
// Recursion definition
//       base case
//       logic(work)
//       function call
//       logic(work)
//       return