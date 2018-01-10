
#include <iostream>
using namespace std;
int main(){
    //gcv;
    //vgc;1
    //cvg;2
    //gcv;3
    int i;
    cin>>i;int m=i%3;
    if(m==0){
        cout<<"GCV";
    }
    else if(m==1){
        cout<<"VGC";
    }
    else{
        cout<<"CVG";
    }
    return 0;
}
