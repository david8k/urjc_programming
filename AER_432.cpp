#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

char mat[21][21];
bool visited[21][21];

int mx[4] = {1,-1,0,0};
int my[4] = {0,0,1,-1};
int r,c;

bool BFS(pii start, pii finish){
    visited[start.first][start.second] = true;
    queue<pii> q;
    q.push(start);
    while(!q.empty()){
        pii g = q.front();
        q.pop();
        if(g.first == finish.first && g.second == finish.second) return true;
        for(int i=0;i<4;i++){
            int ni = g.first + mx[i];
            int nj = g.second + my[i];
            if(ni < 0 || nj < 0 || ni >= r || nj >= c) continue;
            if(visited[ni][nj]) continue;
            if(mat[ni][nj] == '*') continue;
            q.push(make_pair(ni,nj));
            visited[ni][nj] = true;
        }
    }
    return false;
}

int main(){
    while(scanf("%d %d",&r,&c) != EOF && (r|c)){
        pii start, finish;
        for(int i=0;i<r;i++) scanf("%s",mat[i]);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                visited[i][j] = false;
                if(mat[i][j] == 'S')
                    start = make_pair(i,j);
                else if(mat[i][j] == 'F')
                    finish = make_pair(i,j);
            }
        }
        printf("%s\n",BFS(start,finish)?"SI":"NO");
    }
    return 0;
}
