#include <iostream>
#include <vector>
using namespace std;

void resizeMatrix(vector<vector<int> >&matrix,int n,int m){  
    matrix.resize(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(m);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        vector< vector <int> > matrix;
        resizeMatrix(matrix,a,b);
        for(int j=0; j<a; j++){
            for(int k=0; k<b; k++){
                cin>>matrix[j][k];
            }
        }
        bool yes=true;
        for(int j=0; j<a; j++){
            for(int k=0; k<b; k++){
                if((j+1)<a&&(k+1)<b){
                    if((matrix[j][k] == matrix[j+1][k])
                            &&(matrix[j][k] == matrix[j][k+1])
                            && (matrix[j][k] == matrix[j+1][k+1])){
                        yes=false;
                    }
                }
            }
        }
        if(yes){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
