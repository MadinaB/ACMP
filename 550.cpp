#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0||(n%4==0&&n%100!=0)){
        if(n/1000>=1){cout<<"12/09/"<<n;}
        else if(n/100>=1){cout<<"12/09/0"<<n;}
        else if(n/10>=1){cout<<"12/09/00"<<n;}
        else {cout<<"12/09/000"<<n;}
    }
    else{
        if(n/1000>=1){cout<<"13/09/"<<n;}
        else if(n/100>=1){cout<<"13/09/0"<<n;}
        else if(n/10>=1){cout<<"13/09/00"<<n;}
        else {cout<<"13/09/000"<<n;}
    }
    return 0;
}
