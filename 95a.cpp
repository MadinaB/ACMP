#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;int count=0;int hold=0;
    cin>>s;
    while(s.size()>1){
        count++;
        for(int i=0;i<s.size();i++){
            hold+=s[i]-'0';
        }
        s=to_string(hold);
        hold=0;
    }
    cout<<s<<" "<<count;
    return 0;
}
