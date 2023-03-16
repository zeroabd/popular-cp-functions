#include<bits/stdc++.h>
using namespace std;

struct edge{
    int u; // from
    int v; // to
    int w; // cost / weight
};

const int N=1e5+10;
vector<edge> G[N];
bool V[N];

void dfs(edge par){
  V[par.v] = true;
  for(auto ch:G[par.v]){
    if(V[ch.v]) continue;
    dfs(ch);
  }
}

int main(){
  // freopen("inp.txt", "r", stdin);
  // freopen("out.txt", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  // dummy test code
  G[0] = {{0, 1, 1}, {0, 2, 3}};
  G[1] = {{1, 3, 5}, {1, 4, 4}};
  G[2] = {{2, 3, 2}, {2, 5, 7}};
  G[3] = {{3, 4, 6}};
  dfs({-1, 0, 0});

  return 0;
}
