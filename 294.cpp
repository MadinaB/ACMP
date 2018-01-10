#include <iostream>
using namespace std;
int main(){
    int k1,l1,m1,k2,l2,m2;
    cin>>k1>>l1>>m1>>k2>>l2>>m2;
    int lost1,lost2;
    lost1=k1*l1/100;
    lost2=k2*l2/100;
    int dif=k1-lost1-(k2-lost2);
    if(dif>0){lost1+=dif;}
    else if(dif<0){lost2+=abs(dif);}
    cout<<lost1*m1+lost2*m2; 
    return 0;
}
