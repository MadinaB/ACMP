#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 
    long long n=1, n1=0,n2=0; 
    string s; 
    cin >> s; 

    while (s.size() > n-1) 
    { 
        n1 = n2; 
        n2 = n; 
        n = n1 +n2; 
        if ( s.size() > n-1) 
        {
            cout << s[n-1]; 
        } 
    } 
    return 0; 
}
