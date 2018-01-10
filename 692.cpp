#include <iostream>
using namespace std;
int main(){
    int count=0,n;
    cin>>n;
    bitset<32> x(n);
    for(int i=0;i<32;i++){if(x[i]==1){count++;}}
    //cout<<x<<endl;
    cout<<(count==1?"YES":"NO");
    return 0;
}
