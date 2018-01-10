
#include <iostream>
using namespace std;
int main(){
    int count=0,count1=0,hold, a;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>hold;
        if(hold==0){count++;}
        else{count1++;}
    }
    cout<<min(count1,count);
    return 0;
}
