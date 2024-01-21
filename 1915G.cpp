#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()

{
    int n, m;
    cin>>n>>m;

    // making the adjacency matrix;

    vector<pair<int, int>>adj[n];
    for(int i=0; i<m; i++)
    {
        int from, to, cost;
        cin>>from>>to>>cost;
        from--, to--;
        adj[from].pb({to, cost});
        adj[to].pb({from, cost});
    }

    //taking the s factor;

    vector<int>sf(n);
    for(int i=0; i<n; i++)
    {
        cin>>sf[i];
    }

    // heart part;

    // initializing basic distance to unreachable;
    vector<vector<int>>dist(n, vector<int>(n, INF));

    // checking the visiting validity;
    vector<vector<int>>vis(n, vector<int>(n, 0));

    // making the priority queue data structure;
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>pq;

    dist[0][0]=0;
    vector<int>settouple= {0, 0, 0}, gettouple;
    pq.push(settouple);

    while(!pq.empty())
    {
        gettouple=pq.top();
        int result=gettouple[0], city=gettouple[1], bike=gettouple[2];
        pq.pop();
        if(city == n-1)
        {
            cout<<result<<endl;
            return;
        }

        if(vis[city][bike])
        {
            continue;
        }
        vis[city][bike]=1;

        for(auto it:adj[city])
        {
            int child=it.first;
            int weight=it.second;

            int newbike=bike;
            if(sf[child]<sf[bike])
            {
                newbike=child;
            }

            if(dist[child][newbike] < result+weight*sf[bike])
            {
                continue;
            }

            dist[child][newbike] = result+weight*sf[bike];

            pq.push({dist[child][newbike], child, newbike});

        }

    }


}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

