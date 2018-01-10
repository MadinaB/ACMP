#include <iostream>
#include <string>
using namespace std;
int main(){
    string small,big;
    cin>>small>>big;
    int i=0,j=0;
    while(j!=big.size()){
        if(big[j]==small[i]){i++;j++;}
        else{j++;}
        if(i==small.size()){break;}
    }
    if(i==small.size()){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
