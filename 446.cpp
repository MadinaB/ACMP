#include <iostream>
using namespace std;
int main(){
    int a,b;
    string red="4567";
    string green="2367";
    string blue="1357";
    cin>>a>>b;
    char arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    int hold;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>hold;
            char ch=arr[i][j];
            if(ch=='R'){
                if(red.find(to_string(hold))==string::npos)
                {cout<<"NO"; return 0;}
            }
            else if(ch=='G'){
                if(green.find(to_string(hold))==string::npos)
                {cout<<"NO"; return 0;}
            }
            else if(ch=='B'){
            
                if(blue.find(to_string(hold))==string::npos)
                {cout<<"NO"; return 0;}
            }
           // else{}//black ok
        }
    }
    cout<<"YES";
    return 0;
}
