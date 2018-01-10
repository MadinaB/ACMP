#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,a; int n;
    cin>>n;
    for(int i=1;i<200;i++){
        s=s+to_string(i);
        a+=s;
    }
    cout<<a[n-1];
    return 0;
}
