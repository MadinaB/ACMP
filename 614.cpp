#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){
    string s,m;
    unordered_set<string> myset;
    int open=0,close=0;
    cin>>m;s=m;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            open=1;close=0;
            for(int j=i+1;j<s.size();j++){
                if(s[j]==')'){close++;}
                else{open++;}
                if(close>open){break;}
                if(close==open){
                    if(myset.find(s.substr(i,(j-i+1)))==myset.end()){
                    myset.insert(s.substr(i,j-i+1));
                    }
                }
        
        }
        }
    
    }
    cout<<myset.size();
  //  string r="(())";
 //   cout<<endl<< r<<endl<<r.substr(0,1+1)<<endl<<r.substr(0,3+1);

    
}
