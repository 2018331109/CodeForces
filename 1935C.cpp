#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int md=998244353;
const int mod=100;
const int N=200005;

void solve()
{
    int n,l,maxs=0;
    cin>>n>>l;
    pair<int,int> a[n+5];
    for(int i=1; i<=n; ++i) cin>>a[i].second>>a[i].first;
    sort(a+1,a+n+1);
    for(int i=1; i<=n; ++i)
    {
        int sum=0;
        priority_queue<int> q;
        for(int j=i; j<=n; ++j)
        {
            q.push(a[j].second);
            sum+=a[j].second;
            while(q.size() && sum+a[j].first-a[i].first>l)
            {
                sum-=q.top();
                q.pop();
            }
            int s=q.size();
            maxs=max(maxs,s);
        }
    }
    cout<<maxs<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
