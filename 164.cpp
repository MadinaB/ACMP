#include <iostream>
#include <string>
using namespace std;
int biletsum(string s){
    int sum=0,hold=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    while(sum>9){//91
        hold=sum;//10
        sum=0;//0
        while(hold>9){//10
            sum+=hold%10;//sum=0
            hold=(hold-hold%10)/10;
        }
        sum+=hold;
        hold=sum;
    }
    return sum;
}
int main(){
    string s,first,second;
    bool ans=false;
    cin>>s;
    //cout<<biletsum(s);
        for(int l=1;l<s.size();l++){
            first=s.substr(0,l);
            second=s.substr(l,s.size()-l);
            //cout<<first<<" "<<second<<endl;
            if(biletsum(first)==biletsum(second)){ans=true;}
        }
    cout<<(ans==true? "YES": "NO");
    return 0;
}
