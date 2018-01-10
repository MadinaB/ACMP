#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,number,ans;
    cin>>s;
    int digit=1;
    for(int i=0;i<s.size();i++){
        while(s[i]>='0'&&s[i]<='9'){
            number+=s[i];
            i++;
        }
        if(i<s.size()){
        if(number!=""){digit=stoi(number);}
        for(int l=0;l<digit;l++){
        ans+=s[i];
        }
        number="";
        digit=1;}
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if((i+1)%40==0){cout<<endl;}
    }
    //cout<<endl;
    return 0;
}
