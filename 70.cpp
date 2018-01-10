#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,sub,sub2,rootstr;
    int root,length;
    cin>>s>>root;
    bool rootfound;
    for(int i=1;i<=s.size();i++){
        sub=s.substr(0,i);
        rootfound=true;
       // cout<<"start"<<endl;
        for(int l=0;l<s.size();l=l+i){
            sub2=s.substr(l,i);
           // cout<<sub<<" "<<sub2<<endl;
            if(sub!=sub2){rootfound=false;break;}
        }
        if(rootfound==true){rootstr=sub;length=i;break;}
    }
    string output;
    if(root>=0){
        for(int i=1;i<=root;i++){if(output.size()<=2060){output+=rootstr;}}}
    else{//root -1
        int pow=s.size()/rootstr.size();
        if(pow>1){
            int num=pow/-root;
            if(pow%root!=0){cout<<"NO SOLUTION";return 0;}
            else{for(int i=1;i<=num;i++){output+=rootstr;}}
        }//pow 2
        else{cout<<"NO SOLUTION";return 0;}
    }
    if(output.size()>=1023){for(int i=0;i<1023;i++){cout<<output[i];}}
    else{cout<<output;}
    return 0;
}
