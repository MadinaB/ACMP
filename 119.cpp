
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int k,a,b,c,hour,min,sec,l;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>a>>b>>c;
        arr[i]=a*3600+b*60+c;
    }
    sort(arr, arr+k);
    for(int i=0;i<k;i++){
        hour=arr[i]/3600;
        arr[i]=arr[i]%3600;
        min=arr[i]/60;
        arr[i]=arr[i]%60;
        sec=arr[i];
        cout<<hour<<" "<<min<<" "<<sec<<endl;
                //==0?"00":to_string(sec))<<endl;
    }
    return 0;
}
