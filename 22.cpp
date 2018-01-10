#include <iostream>
using namespace std;
int main(){
     int count=0,a;
     cin>>a;
     while(a!=1){
        int d=a%2;
        a=a/2;
        if(d==1){count++;}
     
     }
     //if(a/2==1){count++;}
    cout<<count+1;
    return 0;
}
