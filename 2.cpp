#include <iostream>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    //for(int i=1;i<=a;i++){
      //  count+=i;
    //}
    //
    if(a>0){
    cout<<a*(a+1)/2;}
    else if(a==0){cout<<1;}
    else{cout<<(-1*(a*(a-1)/2))+1;}
    return 0;
}
