#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>tree;
vector<int>subtree;
int n=0, ans=0;

void dfs1(int u)
{
    subtree[u]+=1;
    for(auto it:tree[u])
    {
        dfs1(it);
        subtree[u]+=subtree[it];
    }
}

void dfs2(int u, int cnt)
{
    if(cnt>0)
    {
        ans+=1;
    }
    if(cnt>0)
    {
        cnt--;
    }

    int total=0;
    for(auto it:tree[u])
    {
        total+=subtree[it];
    }

    for(auto it:tree[u])
    {
        dfs2(it, cnt+total-subtree[it]);
    }
}

void solve()
{
    ans=0;
    cin>>n;
    tree.assign(n, vector<int>());
    subtree.assign(n, 0);

    for(int i=1; i<n; i++)
    {
        int p;
        cin>>p;
        tree[p-1].push_back(i);
    }

    dfs1(0);
    /*
        for (auto it:subtree)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    */

    dfs2(0, 0);

    cout<<ans/2<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
