#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[4]=='x'){  
        if(s[1]=='+'){cout<<s[0]+s[2]-2*'0';}
        else{cout<<(s[0]-'0'-(s[2]-'0'));}
    }
    else{
    if(s[1]=='+'){
        if(s[0]=='x'){cout<<(s[4]-'0'-(s[2]-'0'));}
        else{cout<<(s[4]-'0'-(s[0]-'0'));}
    }
    else{
        if(s[0]=='x'){cout<<((s[4]-'0'+(s[2]-'0')));}
        else{cout<<(-(s[4]-'0'-(s[0]-'0')));}
    }
    }
    return 0;
}
