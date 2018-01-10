#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n>>i>>j;
    int toleft=0,toright =0;
    toright=abs(j-i)-1;// 3 1 2
    toleft=n-toright-2;
    cout<<min(toright,toleft);
    return 0;
}
