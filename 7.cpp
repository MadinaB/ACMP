#include <iostream>
#include <string>
using namespace std;
int main(){
    int index=0,z=0;
    string a,b,c, ans;
    cin>>a>>b>>c;
    while(a[0]=='0'){ans=a.substr(1,a.size()-1);a=ans;}
    while(b[0]=='0'){ans=b.substr(1,b.size()-1);b=ans;}
    while(c[0]=='0'){ans=c.substr(1,c.size()-1);c=ans;}
    if(a.size()>b.size()&&a.size()>c.size()){cout<<a;return 0;}// size a>b a>c
    if(b.size()>a.size()&&b.size()>c.size()){cout<<b;return 0;}//
    if(c.size()>b.size()&&c.size()>a.size()){cout<<c;return 0;}
    if(a.size()==b.size()&&a.size()==c.size()){// size a=b=c
        for(int i=0;i<a.size();){
            //cout<<a[i]<<b[i]<<c[i];
            if(a[i]==b[i]&&c[i]==a[i]){i++;z=i;}
            else if(a[i]>b[i]&&a[i]>c[i]){cout<<a; return 0;}
            else if(b[i]>a[i]&&b[i]>c[i]){cout<<b; return 0;}
            else if(c[i]>b[i]&&c[i]>a[i]){cout<<c; return 0;}
           
            else if(a[i]==b[i]&&a[i]>c[i]){cout<<a; return 0;}
            else if(a[i]==c[i]&&a[i]>b[i]){cout<<a; return 0;}
            else if(b[i]==a[i]&&b[i]>c[i]){cout<<b; return 0;}
           
            else if(b[i]==c[i]&&b[i]>a[i]){cout<<b; return 0;}
            else if(c[i]==a[i]&&c[i]>b[i]){cout<<c; return 0;}
            else if(c[i]==b[i]&&c[i]>a[i]){cout<<c; return 0;}
            else{index=i;break;}
        }
    
    }
    if(z==a.size()){cout<<a;}
    //size a=b>c
    //index=0 ili tomu gde a[i]=b[i] no a[i]>c[i] ih sizes ravny
    

    for(int i=index;i<105;i++){
        if(a.size()==b.size()&&a.size()>c.size()&&a.size()>i){
            while(a[i]==b[i]&&i<a.size()){i++;}
            if(a[i]>=b[i]){cout<<a; return 0;}
            else{cout<<b; return 0;}
        }
        else if(b.size()==c.size()&&b.size()>a.size()&&b.size()>i){
            while(b[i]==c[i]&&i<b.size()){i++;}
            if(b[i]>=c[i]){cout<<b; return 0;}
            else{cout<<c; return 0;}
        }
        else if(a.size()==c.size()&&a.size()>b.size()&&c.size()>i){
            while(a[i]==c[i]&&i<a.size()){i++;}
            if(a[i]>=c[i]){cout<<a; return 0;}
            else{cout<<c; return 0;}
        }

    }
    cout<<max(a,(max(b,c)));
    return 0;
}
