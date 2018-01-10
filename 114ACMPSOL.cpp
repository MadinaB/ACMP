#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int d[n],d0[n];
    d[0]=k-1;
    d0[0]=0;
    for(int i=1;i<n;i++){
        d[i]=(d[i-1]+d0[i-1]*(k-1));
        d0[i]=d[i-1];
    }
    cout<<(d[n-1]+d0[n-1]);
    return 0;
}
