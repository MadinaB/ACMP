#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
   // freopen("input.txt","w",stdin);
   // freopen("output.txt","r",stdout);
    vector<int> vec;
    string el="",s;int n;
    getline(cin,s);bool pos=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){ pos=false;}
        if(s[i]>='0'&&s[i]<='9'){el+=s[i];}
        else{
            if(el.size()>0){
                n=stoi(el);
                if(pos==false){n=n*(-1);}
                vec.push_back(n);el="";pos=true;}
        }
    }
    if(el.size()>0){vec.push_back(stoi(el));el="";}
    int min=10001,max=-10001;
    for(int i=1;i<vec.size();i=i+2){
        if(vec[i]>max){max=vec[i];}
    }
    for(int i=0;i<vec.size();i=i+2){
        if(vec[i]<min){min=vec[i];}
    }
    
    cout<<max+min;

    return 0;
}
