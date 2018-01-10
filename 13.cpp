#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int byki=0,korovy=0;
    for(int i=0;i<4;i++){
        if(a[i]==b[i]){byki++;}
        else if(b.find(a[i],0)!=-1){
            korovy++;
        }
    }
    cout<<byki<<" "<<korovy;    
    return 0;
}
