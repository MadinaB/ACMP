#include <iostream>
using namespace std;
void sort(int a[],int n){
    int i=0,swap;
    while(i<n){
        int j=i+1;
        while(j<n){
            if(a[i]>a[j]){swap=a[i];a[i]=a[j];a[j]=swap;}
            j++;
        }
        i++;
    }
}
int main(){
    int n;int count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
    for(int i=0;i<(n/2+1);i++){
        count+=(a[i]/2)+1;
    }
    cout<<count;
}
