
#include <iostream>
using namespace std;
void f(int n,int k, int jumped, long long &count){
    if(jumped==k){
        count++;
    }
    else{
        for(int i=1;i<=n;i++){
            if(jumped+i<=k){
                jumped+=i;
                f(n,k,jumped,count);
                jumped-=i;
         
            }
        }
    }
 
}
 
 
int main(){
    long long count=0;
    int n,k;
    cin>>n>>k;
    int jumped=0;
    f(n,k,jumped,count);
    cout<<count;
    return 0;
}
