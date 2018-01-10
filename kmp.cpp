#include <iostream>
#include <vector>
#include<string>
using namespace std;
vector<int> compute_prefix(string s){
    int len=s.size();
    vector<int> pref(len);
    pref[0]=0;
    int k=0;
    for(int i=1;i<len;++i){
        while((k>0)&&s[k]!=s[i]){
        cout<<"while((k>0)&&s[k]!=s[i]){ k=pref[k-1];}"<<endl<<k
            <<" i "<<i<<" s[k] "<<s[k]<<" s[i] "<<s[i]<<endl;
            k=pref[k-1];
        }
        if(s[k]==s[i]){
            cout<<"if(s[k]==s[i]){++k;}"<<endl<<k+1
            <<" i "<<i<<" s[k] "<<s[k]<<" s[i] "<<s[i]<<endl;
            ++k;
        }
        //cout<<"pref[i]=k"<<k
        //    <<" i "<<i<<" s[k] "<<s[k]<<" s[i] "<<s[i]<<endl;
        pref[i]=k;
    }
    return pref;

}
int main(){
    string a="aabacdcabcabcd";
    vector<int> ans=compute_prefix(a);
    cout<<"Answer "<<a<<endl;
    for(int i=0;i<ans.size();i++){cout<<ans[i]<<" ";}
    return 0;
}
