#include <iostream>
#include <string>
using namespace std;
string binary(int x)
{
    string s;
    do
    {
        s.push_back('0' + (x & 1));
    } while (x >>= 1);
    reverse(s.begin(), s.end());
    return s;

}

int main(){
    int count=0,n;
    cin>>n;
    string x=binary(n);
    for(int i=0;i<x.size();i++){
        if(x[i]=='1'){count++;}}
    cout<<(count==1?"YES":"NO");
    return 0;
}
