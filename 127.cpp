
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    queue<int> q;
    cin>>n;
    int a[n+1][n+1];
    int used[n+1];
    int p[n+1];
    
    for(int i=0;i<n+1;i++){
        used[i]=0;
        p[i]=0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cin>>a[i][j];
        }
    }
    int s,f;
    cin>>s>>f;//start finish
    if(s==f){cout<<0; return 0;}
    int v=s;
    q.push(s);
    used[s]=1;
    p[s]=-1;
    while(!q.empty()){
        v=q.front();
        q.pop();
        for(int j=1;j<n+1;j++){
            if(a[v][j]==1&&used[j]==0){
                q.push(j);
                used[j]=1;
                p[j]=v;
            }
        }
        if(v==f){break;}
    }
    if(v!=f){cout<<-1;return 0;}
    vector<int> ans;
    while(v!=s){
        ans.push_back(v);
        v=p[v];
    }
    ans.push_back(v);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()-1<<endl;
    for(int i=0;i<ans.size();i++){
      //  cout<< ans[i]<<" ";
    }
    return 0;
}
