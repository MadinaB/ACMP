#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;bool ans =true;
    int i=0;
    while(i<s.size()/2){
        if(s[i]!=s[s.size()-1-i]){
            ans=false;
        }
        i++;
    }
    cout<<(ans?"YES":"NO");
    return 0;
}
