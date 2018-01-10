#include <iostream>
#include <string>
using namespace std;
int main(){
    string a, b; int count=-1;
    cin>>a>>b;
    if(a==b){cout<<0;return 0;}
    if(a.size()>1){
    for(int i=1;i<a.size();i++){//data structure without dubs
    string hold=a.substr(a.size()-i,i)+a.substr(0,(a.size()-(i)));
            if(hold==b){cout<<i;return 0;}
        }
    }
    cout<<-1;
    return 0;

}
