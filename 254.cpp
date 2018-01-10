#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,b,c;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> mymap;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b>>c;
        mymap.insert(pair<int,int>(b,c));
    }
    for(int i=0;i<n;i++){
        if(mymap.find(a[i])!=mymap.end()){cout<<(mymap.find(a[i])->second)<<" ";}
        else{cout<<a[i]<<" ";}
    }
    return 0;}
