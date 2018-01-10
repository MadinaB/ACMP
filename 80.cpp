#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string s;
    int a=378,b=378,c=378;
    char op1,op2,t;
    getline(cin,s);
    stringstream ss(s);
    ss>>a>>op1>>b>>op2>>c>>t;
    if(ss.eof()){
    if(t){cout<<"ERROR";return 0;}

    if(a==378||b==378||c==378){cout<<"ERROR";return 0;}
    if(op1!='+'&&op1!='-'&&op1!='*'&&op1!='/'&&op1!='='){cout<<"ERROR";return 0;}
    if(op2!='+'&&op2!='-'&&op2!='*'&&op2!='/'&&op2!='='){cout<<"ERROR";return 0;}
    
    if(op1=='*'&&op2=='='){if(a*b==c){cout<<"YES";}else{cout<<"NO";}}
    else if(op1=='/'&&op2=='='&&b!=0){if(float(a)/b==c){cout<<"YES";}else{cout<<"NO";}}  
    else if(op1=='/'&&op2=='='&&b==0){cout<<"NO";}  
    else if(op1=='+'&&op2=='='){if(a+b==c){cout<<"YES";}else{cout<<"NO";}}    
    else if(op1=='-'&&op2=='='){if(a-b==c){cout<<"YES";}else{cout<<"NO";}}

    else if(op2=='*'&&op1=='='){if(a==b*c){cout<<"YES";}else{cout<<"NO";}}
    else if(op2=='/'&&op1=='='&&c!=0){if(a==float(b)/c){cout<<"YES";}else{cout<<"NO";}}  
    else if(op2=='/'&&op1=='='&&c==0){cout<<"NO";}  
    else if(op2=='+'&&op1=='='){if(a==b+c){cout<<"YES";}else{cout<<"NO";}}    
    else if(op2=='-'&&op1=='='){if(a==b-c){cout<<"YES";}else{cout<<"NO";}}


    else{cout<<"ERROR";}
    
    
    }
    else{cout<<"ERROR";return 0;}
    return 0;

}
