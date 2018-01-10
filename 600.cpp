#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;string s;bool ans;string a;
    cin>>n;
    while(n>0){
        ans=true;
        cin>>s;
        int len=s.size();
        for(int i=0;i<len/3;i++){if(s[i]!='0'){ans=false;}}
        for(int i=len/3;i<2*len/3;i++){if(s[i]!='1'){ans=false;}}
        for(int i=2*len/3;i<len;i++){if(s[i]!='2'){ans=false;}}
        ans?a+="YES\n":a+="NO\n";
        n--;}
    cout<<a;
    return 0;
}
