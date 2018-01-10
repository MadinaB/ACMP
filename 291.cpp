#include <iostream>
#include <set>
#include <string>
using namespace std;
int countPermutations(set<string> myset, string s){
    int count =0;
    for(set<string>::iterator it = myset.begin(); it!=myset.end(); ++it){
        string target= *it;
        string temp = s;
        bool breaked =false;
        for(int i = 0; i < target.size(); i++){
            if(temp.find(target[i])!=string::npos){
                temp.erase(temp.find(target[i]), 1);
            }
            else{
                breaked = true;
                break;
            }
        }
        if(breaked == false){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    set<string> myset;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        myset.insert(s);
    }
    string str;
    cin>>str;
    cout<<countPermutations(myset, str);  
    return 0;
}
