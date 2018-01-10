#include <iostream>
#include <string>
using namespace std;
int main(){
    string mains;
    string s,ans;
    cin>>mains>>s;
    for(int i=mains.find(s,0);i!=string::npos;i=mains.find(s,i)){
        ans+=to_string(i);ans+=" ";
        i++;
    }
    cout<<ans;
    return 0;
}

