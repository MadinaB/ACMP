#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,input;
    cin>>input;
    for(int i=0;i<11000;i++){
        s+=to_string(i);
    }
    cout<<s.find(input);
    return 0;
}
