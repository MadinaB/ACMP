#include <iostream>
using namespace std;
int main(){
    int n;
    string tri,chet;
    int countch=0,countt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            countch++;
            chet=chet+to_string(a[i])+" ";
        }
        else{countt++;
            tri=tri+to_string(a[i])+" ";
        }
    }
    cout<<tri<<endl<<chet<<endl;
    if(countch>=countt){cout<<"YES";}
    else{cout<<"NO";}

    return 0;
}
