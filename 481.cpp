#include <iostream>
#include <string>
using namespace std;
bool palindrome(string s){
    bool a=true;
    int i=0;
    while(i!=s.size()/2){
        if(s[i]!=s[s.size()-1-i]){a=false;}
        i++;
    }   
    return a;
}
void dynamic(string baobab, int &count){
    int n=0;string str;
    for(int i=0;i<baobab.size();i++){
        str=baobab[i];
        baobab.erase(i,1);
        if(palindrome(baobab)){count++;}
        if(baobab.size()>2){dynamic(baobab,count);}
        baobab.insert(i,str);
    }

}
int main(){
    string s;int count=0;
    cin>>s;
    dynamic(s, count);
    cout<<count;
    return 0;
}
