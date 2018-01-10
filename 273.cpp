#include <iostream>
#include <vector>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    vector<int> digits;
    digits.resize(10);
    fill(digits.begin(),digits.end(),0);
    int n;
    cin>>n;
    while(n>1){
        if(n>10){
            int mod = n%10; //153  == 15 3
            digits[mod]++;
            n=n/10;
        }
        else{ 
            digits[n]++;
            n=0;
        }
    }
    int count=0;
    if(count<3){
        cout<<0;
        return 0;
    }
    for(int i=0;i<10;i++){
        count+=digits[i];
    }
    int ans=count*(count-1)*(count-2);
    for(int i=0;i<10;i++){
        ans=ans/factorial(digits[i]);
    }
    return 0;
}
