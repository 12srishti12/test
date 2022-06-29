#include<bits/stdc++.h>
bool email(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=97  && s[i]<=127 ) continue;
        else if(s[i]>=65 && s[i]<=90) continue;
        else if(s[i]>=48 && s[i]<=57) continue;
        else if(s[i]==45 || s[i]==95) continue;
        else return false;
    }
    return true;
}
int main(){
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(email(s)==true){
            cout<<s;
            cout<<"\n";
        }
        else{
            cout<<"email is invalid";
            cout<<"\n";
        }
    }
}
