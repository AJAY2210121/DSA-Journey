#include<iostream>
#include<string>
using namespace std;
// void removechar( string ans, string original){
//     if(original.length() == 0){
//         cout<< ans;
//         return;
//     }
//     if(original[0] == 'a') return removechar(ans, original.substr(1));
//     else return removechar(ans+original[0], original.substr(1));
// }
// int main(){
//     string str1;
//     cout<<"Enter a string : ";
//     cin>> str1;
//     string ans;
//     removechar(ans, str1);
// }
void removechar( string ans, string original, int index){
    if(index == original.size()){
        cout<< ans;
        return;
    }
    if(original[index] == 'a') return removechar(ans, original, index+1);
    else return removechar(ans+original[index], original, index+1);
}
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    removechar("", str, 0);
}
