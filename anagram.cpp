#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int sort(char sa[]){
 int n=strlen(sa);
 for(int i=0;i<=n-1;i++){
    for(int j=i+1;j<=n;j++){
        if(sa[i]>sa[j]){
            int temp=sa[i];
            sa[i]=sa[j];
            sa[j]=temp;
        }
    }
 }

}

int main(){
    char sa[100];
     cout<<"enter the first string";
     cin>>sa;
     char sb[100];
     cout<<"enter the second string";
     cin>>sb;
     sort(sa);
     sort(sb);
     if(strcmp(sa,sb)==0){
        cout<<"both are anagram ";
     }
     else{
        cout<<"they are not angram";
     }

}