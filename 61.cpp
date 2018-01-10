
#include <iostream>
using namespace std;
int main(){
    int a=0,b=0,h=0;
    for(int i=0;i<4;i++){
        cin>>h;
        a+=h;
        cin>>h;
        b+=h;
    }
    //cout<<a<<b;
    if(a>b){cout<<1;}
    else if(a<b){cout<<2;}
    else{cout<<"DRAW";}
    return 0;
}
