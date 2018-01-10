#include <iostream>
using namespace std;
int main(){
    int count=0,hold, a;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>hold;
        if(hold==0){count++;}
    }
    cout<<count;
    return 0;
}
