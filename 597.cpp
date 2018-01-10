#include <iostream>
using namespace std;
int main(){
    int r1,r2,r3;
    cin>>r1>>r2>>r3;
    bool input=false;
    if(r1>=0&&r2>=0&&r3>=0){
        if(r1>r2&&r1>r3){
            if((r2+r3)<=r1){
                input=true;
            }
        }
    }
    cout<<(input? "YES":"NO");
    return 0;
}
