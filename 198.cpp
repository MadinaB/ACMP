
#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int> > matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
void fillMatrix(vector<vector<int> > &matrix){   
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            matrix[i][j]=2;
        }
    }
}
void resizeMatrix(vector<vector<int> >&matrix,int n,int m){  
    matrix.resize(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(m);
    }
}
int main(){
    int size;
    cin>>size;
    vector<vector<int> > matrix;
    vector<int> mults;
    resizeMatrix(matrix,10,size+1);
    fillMatrix(matrix);
    for()
    print(matrix);
    return 0;
}
