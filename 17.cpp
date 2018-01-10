#include <iostream>
#include<string>
using namespace std;
void smallestPal(string &s){
    int i=0;
    bool hasPal=true;
    while(i!=s.size()/2){
        if(s[i]!=s[s.size()/2+i]){hasPal=false;}
        i++;
    }
    if(hasPal)
    {
        if(s.size()%2==0){
            s=s.substr(0,s.size()/2);
            smallestPal(s);

        }
        else{
            s=s.substr(0,s.size()/2+1);
            if(s.size()>1){smallestPal(s);}
        }
    }
}
int main(){
    int n;
    cin>> n;
    char a;
    string s="";
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
    }
    if(s.size()==0){return 0;}
    smallestPal(s);
    int count=0;
    if(s.size()==1){count=1;}
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){count++;}
    }
    cout<<count;
    
    return 0;
}
