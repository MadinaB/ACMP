#include <iostream>
using namespace std;
int main(){
    string a="qwertyuiopasdfghjklzxcvbnm";
    char b;
    cin>>b;
    int x=a.find(b);
    if(x+1<a.size()){cout<<a[x+1];}
    else{cout<<a[x+1-a.size()];}
    return 0;
}
