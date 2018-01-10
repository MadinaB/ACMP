#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int m[a][b];
    int min[a];
    int max[b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<a;i++){
        int mini=m[i][0];
        for(int j=0;j<b;j++){
           if( m[i][j]<mini){
                mini=m[i][j];
           }
        }
        min[i]=mini;
    }

    for(int j=0;j<b;j++){
        int maxi=m[0][j];
        for(int i=0;i<a;i++){
           if(m[i][j]>maxi){
                maxi=m[i][j];
           }
        }
        max[j]=maxi;
    }
    
    int minimum=min[0];
    int maximum=max[0];
    for(int i=0;i< a; i++){
        if(minimum<min[i]){
            minimum=min[i];
        }
    }
    for(int i=0;i<b; i++){
        if(maximum>max[i]){
            maximum=max[i];
        }
    }
    cout<< minimum <<" "<< maximum;
    
    return 0;
}
