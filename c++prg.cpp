#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int a[26];
    for(int i=0;i<26;i++)
    a[i]=0;
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]>1){
            count+=a[i];
        }
    }
    if(count%2==0)
    cout<<count+1<<endl;
    else
    cout<<count<<endl;
}