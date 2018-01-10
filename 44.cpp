#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int ans=0;
    cin>>s;
    for(int i=s.find(">>-->",0);i!=string::npos;i=s.find(">>-->",i)){
        ans++;i++;
    }
    for(int i=s.find("<--<<",0);i!=string::npos;i=s.find("<--<<",i)){
        ans++;i++;
    }
    cout<<ans;
    return 0;
}
