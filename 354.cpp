#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main(){
    int i=2,n;string s;
    cin>>n;
    while(i<=sqrt(n)){
        if(n%i==0){
            s+=to_string(i);
            n=n/i;
            if(n>1){s+='*';}
        }
        else{i++;}
    }
    if(n>1){s+=to_string(n);}
    cout<<s;
    return 0;
}
