#include <iostream>
#include <math.h>
using namespace std;
char incrementChar(){
    
}
string rounded(string e, int n){
    string ans="";
    int i=2;
    ans+=e[0];
    while(i<=n+1){
        if(ans.size()==1){
            ans+='.';
        }
        ans+=e[i];
        i++;
    }
    cout<<ans<<endl;
    if(i<e.size()){
        if(e[i]-'0'>=5){
            cout<<"yes";
            ans[ans.size()-1]=incrementChar(ans[ans.size()-1]);
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    string e="2.7182818284590452353602875";
  //  cout<<
        rounded(e,n);
    return 0;
}
