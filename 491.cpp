#include <iostream>
#include <string>
using namespace std;
bool isPal(string s){
    bool a=true;
    int i=0;
    while(i<s.size()/2){
        if(s[i]!=s[s.size()-1-i]){a=false;}
        i++;
    }
    return a;
}
int main(){
    string s;
    cin>>s;bool change=false;
    if(s.size()<=1){cout<<"NO SOLUTION";return 0;}
    if(isPal(s)==false){cout<<s;}
    else{
        int i=0;
        while(i<s.size()/2){
            if(s[i+1]!=s[i]){s.erase(i,1);change=true;break;}  
            i++;
        }
        if(change==false){cout<<"NO SOLUTION";}
        else{cout<<s;}
    }
    return 0;
}
