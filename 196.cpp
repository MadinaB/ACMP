
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int q=1,n;
    cin>>n;
    int number=n*n;
    int a[n][n];
    int x=0;int i=0,k=0;
    while(number>=q){
        //up

        if(number>=1){
            i=x;
            for(k=x;k<=n-x-1;k++){
                a[i][k]=q;
                q++;
            }
        }
       // cout<<endl<<i<<" "<<x<<" "<<number<<endl;
        if(number>=1&&x+1<n){
            k=n-x-1;
            for(i=x+1;i<=n-x-1;i++){
                a[i][k]=q;
                q++;
            }
        }

        if(number>=1&&n-x-2>=0){
            i=n-x-1;
            //cout<<endl<<i<<" "<<n-x-2<<" "<<number<<endl;
            for(k=n-x-2;k>=x;k--){
                a[i][k]=q;
                q++;
            }
        }

        if(number>=1&&n-x-2>=0){
            k=x;
            for(i=n-x-2;i>x;i--){
                a[i][k]=q;
                q++;
            }
        }
        //if(number<1||x<n/2+1){break;}
        x++;
    }

    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
        
            cout<<a[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
