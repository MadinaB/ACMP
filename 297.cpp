#include <iostream>
using namespace std; 
int main(){
    string s;int count=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='6'||s[i]=='9'||s[i]=='0'){count+=1;}
        else if(s[i]=='8'){count+=2;}
    }
    cout<<count;
    return 0;
}
