#include <iostream>
#include <unordered_map>
using namespace std;
string multiply(string a,string b,int asize,int bsize){
    string m;
    int len=asize+bsize+1;
    char c[size];
    for(int i=asize-1,j=bsize-1;i>0,j>0;i--,j--){
        string s=to_string((stoi(a[i])+stoi(b[j])+cur);
        if(s.size()>1){cur=}
    }
 
    //`:Wqint length=

    return m;
}
int main(){
    int k=1;
    unordered_map <int, string> mymap;
    mymap[0]="1";
    for(int i=1;i<100;i++){
        mymap[i]=multiply(mymap[i-1],to_string(k),
                mymap[i-1].size(), to_string(k).size());
        k++;
    }
    for(int i=1;i<100;i++){
         cout<<mymap.at(i)<<" ";}

    return 0;
}
