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
            matrix[i][j]=0;
        }
    }
}
void resizeMatrix(vector<vector<int> >&matrix,int n,int m){  
    matrix.resize(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(m);
    }
}
bool godown(vector<vector<int> >&matrix,int &i,int &j){  
    bool ans=true;
    if((i+1>=matrix.size())){
        ans=false;
    }
    if((i+1<matrix.size())&&(matrix[i+1][j]!=0)){
        ans=false;
    }
    return ans;
}

void down(vector<vector<int> >&matrix,int &i,int &j, int &n){  
    i++;
}
bool goright(vector<vector<int> >&matrix,int &i,int &j){  
    bool ans=true;
    if((j+1>=matrix.size())){
        ans=false;
    }
    if((j+1<matrix.size())&&(matrix[i][j+1]!=0)){
        ans=false;
    }
    return ans;
}

void right(vector<vector<int> >&matrix,int &i,int &j, int &n){  
    j++;
}
bool goupright(vector<vector<int> >&matrix,int &i,int &j){  
    bool ans=true;
    if((j+1>=matrix.size())){
        ans=false;
    }
    if((i-1<0)){
        ans=false;
    }
    if(((j+1<matrix.size())&&(i-1>=0))&&(matrix[i-1][j+1]!=0)){
        ans=false;
    }
    return ans;
}

void upright(vector<vector<int> >&matrix,int &i,int &j, int &n){  
    i--;
    j++;
}
bool goleftdown(vector<vector<int> >&matrix,int &i,int &j){  
    bool ans=true;
    if((i+1>=matrix.size())){
        ans=false;
    }
    if((j-1<0)){
        ans=false;
    }
    if(((i+1<matrix.size())&&(j-1>=0))&&(matrix[i+1][j-1]!=0)){
        ans=false;
    }
    return ans;
}

void leftdown(vector<vector<int> >&matrix,int &i,int &j, int &n){  
    i++;
    j--;
}
void write(vector<vector<int> >&matrix,int &i,int &j, int &n){  
    matrix[i][j]=n;
    n++;
}

int main(){
    int size;
    cin>>size;
    vector<vector<int> > matrix;
    resizeMatrix(matrix,size,size);
    fillMatrix(matrix);
    int curi=0, curj=0;
    int n=1;
    if(size>0){
        write(matrix, curi, curj, n);
    }
    while((curi<size-1)||(curj<size-1)){
        if(godown(matrix, curi, curj)){
            down(matrix, curi, curj, n);
            write(matrix, curi, curj,n);
        }
        while(goupright(matrix, curi, curj)){
            upright(matrix, curi, curj, n);
            write(matrix, curi, curj,n);
        }
        if(goright(matrix, curi, curj)){
            right(matrix, curi, curj, n);
            write(matrix, curi, curj,n);
        }
        while(goleftdown(matrix, curi, curj)){
            leftdown(matrix, curi, curj, n);
            write(matrix, curi, curj,n);
        }
       
    }
    print(matrix);
    return 0;
}
