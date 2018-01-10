#include <iostream>
using namespace std;
int main(){
    string s;
    int cur=0,maxup=0,maxdown=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){cur++;}
        else{cur--;}
        //cout<<cur<<endl;
        maxup=max(maxup,cur);
        maxdown=min(maxdown,cur);
    }
    cout<<maxup+1-maxdown;
    return 0;
}
