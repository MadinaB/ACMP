
#include <iostream>
using namespace std;
int main(){
    int k;long long int n,m, ans;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>n>>m;
        ans=19*m+(n+239)*(n+366)/2;
        cout<<ans<<endl;
    }
    return 0;
}
