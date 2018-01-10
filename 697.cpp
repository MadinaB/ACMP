#include <iostream>
using namespace std;
int main(){
    int l,w,h;
    cin>>l>>w>>h;
    int size=2*h*(l+w);int ans=size/16;
    if(size%16>0){cout<<1+ans;}
    else{cout<<ans;}
    return 0;
}
