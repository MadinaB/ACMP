#include <iostream>
#include <math.h>
using namespace std;
int leastEnergy(int n, int size,int* way){
    int end=size;
    if(n==1){return 0;}
    else if(n==2){return abs(way[end-2]-way[end-1]);}
    else if(n>=3){
        // 1 2 3   3
        // 0 1 2  3
        int jump=abs(way[end-n]-way[end-n+1]);
        int superJump=3*abs(way[end-n]-way[end-n+2]);
        return min(jump+leastEnergy(n-1,size,way),superJump+leastEnergy(n-2,size,way));
    }
}
int main(){
    int n;
    cin>>n;
    if(n<=0){return 0;}
    int way[n];
    for(int i=0;i<n;i++){
        cin>>way[i];
    }

    cout<<leastEnergy(n, n,way);
    return 0;
}
