#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int arra[26];
    bool ans=true;
    for(int i=0;i<26;i++){arra[i]=0;}
    for(int i=0;i<a.size();i++){
        arra[a[i]-'A']++;}
    for(int i=0;i<b.size();i++){
        arra[b[i]-'A']--;}
    for(int i=0;i<26;i++){
        //cout<<arra[i]<<" ";
        if(arra[i]!=0){ans=false;}}
    cout<<(ans?"YES":"NO");
    return 0;


}
