// DFS IN C++
#include <bits/stdc++.h>
using namespace std;
const int  N = 1e5+2;
bool vis[N];
vector<int> adj[N];

int main(){
    /* code */
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    stack<int> st;
    st.push(1);
    vis[1]=true;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                st.push(*it);
            }
        }
    }
    return 0;
}
