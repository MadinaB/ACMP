#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxMoney(int *hair, int n){
    vector<int*> bestDays;
    int* bestDay=max_element(hair,hair+n);
    bestDays.push_back(bestDay);
    while(bestDay!=hair+n-1){
        bestDay=max_element(bestDay+1,hair+n);
        bestDays.push_back(bestDay);
    }
    int sum=0;
    int head=0;
    int ptr=0;
    for(int * i=hair ; i < hair+n; i++){
        if(i==bestDays[ptr]){
            head++;
            sum+=head*(*i);
            ptr++;
            head=0;
        }
        else{
            head++;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int hair[n];
    for(int i=0;i<n;i++){
        cin>>hair[i];
    }
    cout<<maxMoney(hair,n);
    return 0;
}
