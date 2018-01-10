#include <iostream>
using namespace std;
int main(){
    int n,hold;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>hold;
        if(hold<=437){cout<<"Crash "<<i+1;return 0;}
    }
    cout<<"No crash";
    return 0;
}
