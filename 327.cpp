#include <iostream>
using namespace std;
int main(){
    int k;char a,b,c,d,e,f;string s;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>a>>b>>c>>d>>e>>f;
        int first=a+b+c-3*'0';
        int second=(d-'0')*100+(e-'0')*10+f-'0';
        string second1=to_string(second+1);
        string second2=to_string(second-1);
        int sum1=0,sum2=0;
        for(int l=0;l<second1.size();l++){sum1+=second1[l]-'0';}
        for(int l=0;l<second2.size();l++){sum2+=second2[l]-'0';}
       // cout<<sum1<<" "<<first<<endl;
        if(sum1==first){s+="Yes";s+='\n';}
        else if(sum2==first){s+="Yes";s+='\n';}
        else{s+="No";s+='\n';}
    }
    cout<<s;
    return 0;
}
