
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
void fillDigits(int length, int base, int index, int& count, int digits[]){
    if(index==length){
           count++;
    }
    else{
        for(int i=0;i<base;i++){
             if(index<1||!(digits[index-1]==0&&i==0)){
                if(!(index==0&&i==0)){
                    digits[index]=i;
                    index++;
                    fillDigits(length,base,index,count, digits);
                    digits[index]=0;
                    index--;
                }
            }
        }
    }
}
int numsWithoutZero(int length, int base){
    int digits[length];
    int count=0;
    int index=0;
    fillDigits(length,base,index,count, digits);
    return count;
}
int main(){
    int n, k;
    cin>>n>>k;
    cout<<numsWithoutZero(n,k);
    return 0;
}
