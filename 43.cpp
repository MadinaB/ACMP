#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;int max0=0,cur=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            cur++;
        }
        else{cur=0;}
        max0=max(max0,cur);
    }
    cout<<max0;
    return 0;
}
