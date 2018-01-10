#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    long double x1,y1,x2,y2,ans;
    cin>>x1>>y1>>x2>>y2;
    ans=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<fixed<<setprecision(5)<<ans;
    return 0;
}
