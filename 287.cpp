#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<string> substrings;
    int n,m;string s;int count=0;
    cin>>n>>m>>s;
    for(int i=0;i<n-m+1;i++){
        if(substrings.find(s.substr(i,m))==substrings.end()){
            substrings.insert(s.substr(i,m));
            count++;
        }
    }
    cout<<count;
    return 0;
}
