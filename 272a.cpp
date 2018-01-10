#include <iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int min=10001; int max=-10001;
    int n,m;
    while(cin>>n){
        if(n<min){min=n;}
        if(cin>>m){if(m>max){max=m;}}
    }
    cout<<max+min;


}
