#include <iostream>
using namespace std;
int main(){
    char l;int n;
    string k;
    cin>>k;
    string black="A1C1E1G1B2D2F2H2A3C3E3G3B4D4F4H4A5C5E5G5B6D6F6H6A7C7E7G7B8D8F8H8";
    if(black.find(k)!=string::npos){cout<<"BLACK";}
    else{cout<<"WHITE";}
    return 0;
}
