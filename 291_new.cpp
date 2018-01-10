#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][26];
    string str;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < 26; j++){
            a[i][j]=0; 
        }
    }
    for(int i = 0; i < n; i++) {
        cin >> str;
        for(int j = 0; j < str.length(); j++) {
            a[i][str[j] - 'a']++; 
        }
    }
    string alph;
    cin >> alph;
    int alph_arr[26];
    int cnt = 0;
    
    for( int i = 0; i < n; i++){
        alph_arr[i]=0;
    }
    for(int i = 0; i < alph.length(); i++) {
        alph_arr[alph[i] - 'a']++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            a[i][j] -= alph_arr[j];
        }
        bool found = 1;
        for(int j = 0; j < 26; j++) {
            if(a[i][j] > 0) {
                found = 0;
                break;
            }
        }
        if(found == 0) continue;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
