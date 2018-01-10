#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0,hold=0,count=0;
    if(s.size()>1){count++;}
    for(int i=0;i<s.size();i++){sum+=s[i]-'0';}
    while(sum>9){
        hold=sum;
        sum=0;
        while(hold>9){
            count++;
            sum+=hold%10;
            hold=(hold-hold%10)/10;
        }
        sum+=hold;
    }
    cout<<sum<<" "<<count;
    return 0;
}
