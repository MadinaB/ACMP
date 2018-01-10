#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> myset;
    int n,a,b;
    for(int i=0;i<n;i++){
    //myset.insert(3);
    cin>>a>>b;
    while(a!=b){
        myset.insert(a);
        a++;
    }    
    }
    for(set<int>::iterator it=myset.begin();it!=myset.end();it++){    
        cout<<*it;
    }   
   
    return 0;
}       
