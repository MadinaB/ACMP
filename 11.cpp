#include <iostream>
using namespace std;
int countCombinations(int n,int k){
    int count=0;
    if(n==0){count=1;}
    else if(n>0){
        for(int i=1;i<=k;i++){
            count+=countCombinations(n-i,k);
        }
    }
    return count;
 
}
 
 
int main(){
    int count=0,n,k;
    cin>>k>>n;
    cout<<countCombinations(n,k);
    return 0;
}
