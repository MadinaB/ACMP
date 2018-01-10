#include <iostream>
#include <string>
using namespace std;
bool perestanovka(string s1, string s2){
    int letters[26];
    for(int i=0;i<26;i++){
        letters[i]=0;
    }
    for(int i=0;i< s1.size(); i++){
        letters[tolower(s1[i])-'a']++;
    }
    for(int i=0;i< s2.size(); i++){
        letters[tolower(s2[i])-'a']--;
    }
    for(int i=0;i<26;i++){
        if(letters[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<(perestanovka(s1, s2) ? "Yes": "No") ;
    return 0;
}
