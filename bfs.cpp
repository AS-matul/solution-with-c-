#include <bits/stdc++.h>

using namespace std;

#define MAX 10099

int path[MAX];
int visited[MAX];
vector <int> edge[MAX];

void bfs_level_set(int s)
{
    queue <int> q;
    visited[s] = 1;
    path[s] = 0;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        int length = edge[u].size();
        for(int i=0; i<length; i++){
            if(visited[edge[u][i]] == 0){
                visited[edge[u][i]] = 1;
                q.push(edge[u][i]);
                path[edge[u][i]] = path[u]+1;
            }
        }
        q.pop();
    }
}
int main()
{

    //output();
    int q;
    cin >> q;
    for(int ami=q;ami>0;ami--){
        int node, m;
        cin >> node;
        cin >> m;
        for(int i=1; i<=m ; i++){
            int u, v;
            cin >> u >> v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        int s;
        cin >> s;
       // cout <<sizeof(visited);
       // return 0;
        memset(visited, 0, sizeof(visited));
        memset(path, 0, sizeof(path));
        bfs_level_set(s);
        for(int i = 1; i<= node; i++){
            if(i==s)
                continue;
            if(visited[i]!= 0)
                cout << path[i]*6;

            else
                 cout << "-1";
            cout << (i==node ? "\n":" ");
        }
        for(int i=0; i<MAX; i++)
            edge[i].clear();
    }
    return 0;
}
