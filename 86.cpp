#include <iostream>
using namespace std;
int main(){
    int count=0,n;
    cin>>n;
    if(n<3){cout<<0;}
    else{
        while(n>=3){
            count+=2*(n-2);
            n--;
        }
        cout<<count;
    }
    return 0;
}
