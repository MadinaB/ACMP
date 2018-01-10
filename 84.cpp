
#include <iostream>
#include <vector>
using namespace std;
void resizeMatrix(vector<vector<char> >&matrix,int n,int m){  
    matrix.resize(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(m);
    }
}
void fillMatrix(vector<vector<char> >&matrix, int up, int low, int left, int right){
    for(int i=low; i<=up;i++){
        for(int j=left; j<=right; j++){
            matrix[i][j]='*';
        }
    }
}  

void print(vector<vector<char> >&matrix){
    for(int i=0; i<matrix.size();i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}  
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char> > matrix;
    resizeMatrix(matrix,n,m);
    int upperI=0;
    int lowerI=0;
    int leftJ=0;
    int rightJ=0;
    bool star=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> matrix[i][j];
            if(matrix[i][j]=='*'){
                star = true;
                if((upperI == 0&&lowerI == 0)&&(leftJ == 0&&rightJ == 0)){
                    upperI=i;
                    lowerI=i;
                    leftJ=j;
                    rightJ=j;
                }
                if(i>upperI){
                    upperI=i;
                }
                if(i<lowerI){
                    lowerI=i;
                }
                if(j<leftJ){
                    leftJ=j;
                }
                if(j>rightJ){
                    rightJ=j;
                }
            }   
        }
    }
   // cout<< upperI<<" "<<lowerI<<" "<<leftJ<<" "<<rightJ;
    if(star){
        fillMatrix(matrix,upperI,lowerI, leftJ, rightJ);
    }
    print(matrix);
    return 0;
}
