#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int n;string s;
    string letters, nums,ans;
    letters="ABCEHKMOPTXY"; nums="0123456789";
    cin>>n;char a,e,f;char b,c,d;string g;
    while(n>0){
        stringstream ss;
        cin>>s;ss<<s;ss>>a>>b>>c>>d>>e>>f;//ss>>g;
        //cout<<g<<" ";
        if(s.size()!=6){ans+="NO";ans+='\n';}
        else if((letters.find(a)!=string::npos)
                &&(letters.find(e)!=string::npos)
                &&(letters.find(f)!=string::npos)
                &&(nums.find(b)!=string::npos)
                &&(nums.find(c)!=string::npos)
                &&(nums.find(d)!=string::npos)
                &&s.size()==6 
        ){ans+="Yes";ans+='\n';}
        else{ans+="No";ans+='\n';}
        n--;}
    cout<<ans;
    return 0;
}
