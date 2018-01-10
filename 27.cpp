#include <iostream>
#include <vector>
using namespace std;
void ResizeFill(vector<vector<int> > &matrix, int a, int b){
   matrix.resize(a);
   for(int i=0; i<a; i++){
        matrix[i].resize(b);
   }
   for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            matrix[i][j]=0;
        }
   }
}
void Fill(vector<vector<int> > &matrix, int x1, int y1, int x2, int y2){
   for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            matrix[i][j]=1;
        }
   }
}

int count(vector<vector<int> > &matrix){
    int count=0;
   for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
           if( matrix[i][j] ==0){
                count++;
           }
        }
   }
   return count;
}
int main(){
    int a,b;
    cin>>b>>a;
    int n;
    cin>>n;
    vector< vector<int> > matrix;
    ResizeFill(matrix, a, b);
    for(int i=0; i<n;i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        Fill(matrix, x1, y1, x2, y2);   
    }
    cout<<count(matrix);
    return 0;
}
