
#include <iostream>
#include <vector>
#include <cmath>
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
bool checkRows(vector<vector<int> > &matrix){
    bool ans=true;
    for(int i=0;i<matrix.size();i++){
        int row[100];
        for(int k=0;k<matrix.size();k++){
            row[k]=0;
        }
        for(int j=0;j<matrix[i].size();j++){
            row[matrix[i][j]-1]++;
        }
        for(int k=0;k<matrix.size();k++){
            if(row[k]!=1){
                ans=false;
            }
        }
    }
    return ans;
}
bool checkColumns(vector<vector<int> > &matrix){
    bool ans=true;
    for(int j=0;j<matrix.size();j++){
        int column[100];
        for(int k=0;k<matrix.size();k++){
            column[k]=0;
        }
        for(int i=0;i<matrix.size();i++){
            column[matrix[i][j]-1]++;
        }
        for(int k=0;k<matrix.size();k++){
            if(column[k]!=1){
                ans=false;
            }
        }
    }
    return ans;
}
bool checkSquares(vector<vector<int> > &matrix){
    bool ans=true;
    int size=sqrt(matrix.size());
    int digits[100];
    /*for(int k=0;k<matrix.size();k++){
        digits[k]=0;
    }*/
    for(int n=0;n<size;n++){
        for(int m=0;m<size;m++){
            for(int k=0;k<matrix.size();k++){
                digits[k]=0;
            }
            for(int i=n*size;i<(n+1)*size;i++){
                for(int j=m*size;j<(m+1)*size;j++){
                    digits[matrix[i][j]-1]++;
                }
            }
            for(int k=0;k<matrix.size();k++){
                if(digits[k]!=1){
                    ans=false;
                }
            }
        }
    }
    /*for(int k=0;k<matrix.size();k++){
        if(digits[k]!=1){
             ans=false;
        }
    }*/

    return ans;
}
void resizeMatrix(vector<vector<int> >&matrix,int n,int m){  
    matrix.resize(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(m);
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int> > matrix;
    resizeMatrix(matrix,n*n,n*n);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
           cin>> matrix[i][j];
        }
    }
    cout<<(((checkSquares(matrix)&&checkRows(matrix))&&checkColumns(matrix))? "Correct":"Incorrect");
    return 0;
}
