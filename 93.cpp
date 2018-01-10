#include <iostream>
#include <string>
using namespace std;
int compare(string a, string b){
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){count++;}
    }
    if(count==1){return 1;}
    else{return 0;}
}
int main(){
    int ans=0;
    int n;cin>>n;string a[30];
    for(int i=0;i<n;i++){cin>>a[i];}
    int m;cin>>m;string b[30];
    for(int i=0;i<m;i++){cin>>b[i];}
    int answers[n];
    for(int i=0;i<n;i++){answers[i]=0;}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i].size()==b[j].size()){answers[i]+=compare(a[i],b[j]);}
        }
    }
    for(int i=0;i<n;i++){cout<<answers[i]<<" ";}
    return 0;
}
