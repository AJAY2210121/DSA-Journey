#include<iostream>
using namespace std;

  int factorialUpTo(int num){     
        int factNum = 1;
        for (int  j = 1; j <= num; j++) {
            factNum *= j;
        }
        cout<< factNum<< endl;
    return 0;
}
int main(){
    int num;
    cin>> num;
    factorialUpTo(num);


}