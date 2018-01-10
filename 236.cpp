#include <iostream>
#include <math.h>
using namespace std;
int to_int(string s){
    int k=0;
    for(int i=0;i<s.size();i++){
        k+=(s[i]-'0')*pow(10,i);
    }
    return k;
}
int evaluateExpression(string s)
{
    int result=0;
    int i=0;
    while(i<s.size())
    {   
        bool negate=false;
        int int1=0;
        int int2=0;
        int int3=0;
            if(s[i]=='-'){
                negate=true;
                i++;
            }
            if(s[i]=='+'){
                i++;
            }
            string operand="";
            while(s[i]>='0'&&s[i]<='9'){
                operand += s[i];
                i++;
            }
            int1=to_int(operand);
            operand="";
            int2=1;
            int3=1;
            if(s[i]=='*'){
                i++;
                while(s[i]>='0'&&s[i]<='9'){
                    operand += s[i];
                    i++;
                }
                int2=to_int(operand);
                operand="";
            }
            if(s[i]=='^'){
                i++;
                while(s[i]>='0'&&s[i]<='9'){
                    operand += s[i];
                    i++;
                }
                int3=to_int(operand);
                operand="";
            }
    int digit=int1*int2*int3;
    if(negate){digit=digit*-1;}
    result+=digit;
    }
    return result;
}
string makeExpression(string s, int n){
    string expression = "";
    for(int i = 0;i<s.size(); i++)
    {
        if(s[i] == 'x')
        {
          //  expression += '*';
            expression += to_string(n);
        }
        else{
            expression += s[i];
        }
    }
    return expression;

}
int main(){
    string s="";
    cin>>s;
    int n=7;
    cin>>n;
    cout<<evaluateExpression(makeExpression(s,n));
    return 0;
}
