
#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    vector<int> vec;
    if(b==0){cout<<0<<" "<<a;return 0;}
    for(long long int i=1;i<a;i++){
        if(b/i==(a-i)&&b%i==0){cout<<i<<" "<<a-i; return 0;}
    }
    //coout<<

    return 0;
}
