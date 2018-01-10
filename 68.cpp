#include <iostream>
using namespace std;
int main(){
    string location;
    int n;
    cin>>location>>n;
    if(location == "Home"){
        cout<<"Yes";
    }
    else if(location == "School" && n%2!=0){
        cout<<"Yes";
    }
    else{
    cout<<"No";
    }
    

    return 0;
}
