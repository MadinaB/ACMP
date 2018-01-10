#include <iostream>
using namespace std;
int main(){
    int t3=0,t5=0,n;
    cin>>n;
    if(n%5==0){t5=n/5; n=0;}
    while((n-5)%3==0){
        n=n-5;
        t5++;
    }
    while(n-3>=0){
        n=n-3;
        t3++;
    }
    cout<<t5<<" "<<t3;

}
