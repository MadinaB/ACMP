#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<string> myset;
    string a, b; int count=0;
    cin>>a>>b;
    myset.insert(b);
    if(b.size()>1){
        for(int i=0;i+1<b.size();i++){//data structure without dubs
            string hold=b.substr(i+1,b.size()-(i+1))+b.substr(0,(b.size()-(b.size()-(i+1))));
            myset.insert(hold);
        }
    }
    for(unordered_set<string>::iterator it=myset.begin();it!=myset.end();++it){
        //cout<<*it<<" ";
        string p=*it;//perestanovka
        for(int i=a.find(p,0);i!=string::npos;i=a.find(p,++i))
        {count++;}
    }
    cout<<count;
    return 0;

}
