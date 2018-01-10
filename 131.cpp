
#include <iostream>
using namespace std;
int main(){
    int maxage=0,index=-1,k,age,gender;
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>age>>gender;
        if(gender==1){
            if(maxage<age){
                maxage=age;
                index=i;
            }
        
        }
    }
cout<<index;
    return 0;
}
