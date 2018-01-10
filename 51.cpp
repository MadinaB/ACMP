#include <iostream>
using namespace std;
int fact(int n,int k,int mod){
    if(n-k>=mod){return n*(fact(n-k,k,mod));}
    else{return 1;}
}
int main(){
    int n; string s; int len,mod;
    cin>>n>>s;
    len=s.size();
    mod=n%len;
    if(n-len>0){
        cout<<fact(n,len,mod);
    }
    else{cout<< n;}
    return 0;
}
