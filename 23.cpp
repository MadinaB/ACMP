#include <iostream>
using namespace std;
int main(){
    int count=0,a;
    cin>>a;
    for(int i=1;i<a/2+1;i++){
        if(a%i==0){count+=i;}
    
    }
    cout<<count+a;
    return 0;
}
