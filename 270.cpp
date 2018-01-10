#include <iostream>
#include <string>
using namespace std;
bool isJava(string s){
    if(!(s[0]<='z'&&s[0]>='a')){
        return false;
    }
    for(int i=1;i<s.size();i++){
        if(s[i]<='z'&&s[i]>='a'){
     
        }
        else if(s[i]<='Z'&&s[i]>='A'){
            
        }
        else{
            return false;
        }
    }
    return true;
}
bool isCpp(string s){
    if(!(s[0]<='z'&&s[0]>='a')){
        return false;
    }
    bool underscore=false;
    for(int i=1;i<s.size();i++){
        //cout<<(s[i]>='z')<<endl;
        if(s[i]<='z'&&s[i]>='a'){
            underscore=false;
        }
        else if(s[i]=='_'){
            if(underscore==true||i==s.size()-1){
                return false;
            }
            else{
                underscore=true;
            }
        }
        else{
          //  cout<<s[i]<<" "<<i<<endl;
            return false;
        }
    }
    return true;
}
string toCpp(string s){
    string ans="";

    for(int i=0;i<s.size();i++){
        if(s[i]<='z'&&s[i]>='a'){
            ans+=s[i];
        }
        else{
            ans+='_';
            ans+=tolower(s[i]);
        }
    }
    return ans;
}
string toJava(string s){
    string ans="";

    for(int i=0;i<s.size();i++){
        if(s[i]<='z'&&s[i]>='a'){
            ans+=s[i];
        }
        else{
            i++;
            ans+=toupper(s[i]);
        }
    }
    return ans;
}
string converted(string s){
    string converting="";
    if(isJava(s)){
        converting=toCpp(s);
    }
    else if(isCpp(s)){
        converting = toJava(s);
    }
    else{
        converting="Error!";
    }
    return converting;
        
}
int main(){
    string s;
    cin>>s;
    cout<<converted(s);
    return 0;
}
