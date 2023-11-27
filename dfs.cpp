#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>gr;
vector<bool>vis;
int n;

void  dfs(int st){

    vis[st] = 1;
    cout<<st<<"";

    for(int i = 0; i<gr[st].size(); i++){
        int next = gr[st][i];
        if(vis[next] == 0){
            dfs(next);
        }
    }
}
int main(){


    cin >> n ;
    gr.assign(n, vector<int>());
    vis.assign(n, 0);

    for(int i=0; i<n; i++){
        int u,v;
        cin >>u>>v;
        gr[u].push_back(v);
    }

for(int i=0; i<gr.size(); i++){
    for(int j = 0; j<gr[i].size(); j++){
        cout << gr[i][j] << "";
    }
    cout << endl;
}

int s;

cin >> s;

dfs(s);

}
