#include <iostream>
using namespace std;
int main(){
    int arr[31];
    for(int i=0;i<31;i++){arr[i]=0;}
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        arr[a-1]++;
        while(a!=b){
            a++;
            arr[a-1]++;
        }
    }

    for(int i=0;i<31;i++){if(arr[i]==n){cout<<"YES";return 0;}}
    cout<<"NO";
    return 0;
}
