#include <iostream>
using namespace std;
int main(){
    string a,b,s;
    cin>>a>>b;
    int i=0,j=0;//v nachale naimenwee iz a.substr(i,a.size()-i)
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){s+=a[i];i++;}
        if(a[i]>b[j]){s+=b[j];j++;}
        else{ 
            if(stoi(a.substr(i,a.size()-i))>stoi(b.substr(j,b.size()-j)))
                    {s+=a[i];i++;}
            else {s+=b[j];j++;}
        
        }
    }

    while(i<a.size()){  s+=a[i];i++;}
    while(j<b.size()){       s+=b[j];j++;}
    cout<<s;
    return 0;
}
