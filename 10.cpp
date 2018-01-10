#include <iostream>
using namespace std;
int main(){
    long long int a,b,c,d;long long int k;
    cin>>a>>b>>c>>d;
   // vector <int> ans;
    for(int i=-100;i<=100;i++){
        k=a*i*i*i+b*i*i+c*i+d;
        if(k==0){cout<<i<<" ";}
    }
    return 0;
}
