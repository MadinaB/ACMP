#include <iostream>
#include <string>
using namespace std;
string max(string a,string b){
    string ans; 
    if(a.size()!=b.size()){a.size()>b.size()? ans= a:ans= b;}
    else{
        int i=0;
        while(a[i]==b[i]&&i<a.size()){i++;}
        if(a[i]>=b[i]){ans=a;}
        else{ans=b;}
    }
    return ans;

}
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    cout<<max(c,max(a,b));
    return 0;
}
