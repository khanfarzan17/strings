#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((  ch>='a' && ch<='z')||( ch>='A' && ch<='Z')){
        cout<<"it is a alphabet ";

    }
    else{
        cout<<" not a alphabet ";
    }
    return 0;
}