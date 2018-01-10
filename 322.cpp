#include <iostream>
#include <vector>
using namespace std;
void fillFib(vector<int> & fib, int size){
    int last=size;
    fib.push_back(1);
    fib.push_back(1);
    int i=1;
    while(fib[i]<=last){
        fib.push_back(fib[i]+fib[i-1]);
        i++;
    }
}
string fibInput(string input){
    string output="";
    vector<int> fib;
    int size = input.size();
    
    fillFib(fib,size);
    for(int i = 1; i < fib.size(); i++){
        output+=input[fib[i]-1];
    }
    return output;
}
int main(){
    string input;
    cin>>input;
    cout<<fibInput(input);
    return 0;
}
