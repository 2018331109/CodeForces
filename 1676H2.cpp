#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N=3e5;

int bxp(int base, int pow)
{
    int res = 1ll;
    while (pow)
    {
        if (pow % 2ll)
        {
            res = (base * res) % mod;
            res %= mod;
        }
        pow /= 2ll;
        base *= base;
        base %= mod;
    }
    return res;
}

vector<int>v(N, 0);
vector<int>STree(4*N, 0);

int build(int node, int start, int end)
{
    if(start==end)
    {
        return STree[node]=0;
    }

    int mid=(start+end)/2;
    int left=build(2*node, start, mid);
    int right=build(2*node+1, mid+1, end);
    STree[node]=left+right;
    return STree[node];
}

int query(int node, int start, int end, int qstart, int qend)
{
    if(qstart>end || qend<start)
    {
        return 0;
    }

    if(qstart<=start and qend>=end)
    {
        return STree[node];
    }

    int mid=(start+end)/2;

    int left=query(2*node, start, mid, qstart, qend);
    int right=query(2*node+1, mid+1, end, qstart, qend);

    return left+right;
}

int update(int node, int start, int end, int qstart)
{
    if (qstart > end || qstart < start)
    {
        return STree[node];
    }

    if (start == end)
    {
        STree[node] += 1;
        return STree[node];
    }

    int mid = (start + end) / 2;
    int left = update(2 * node, start, mid, qstart);
    int right = update(2 * node + 1, mid + 1, end, qstart);

    return STree[node] = left + right;
}


void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    build(1, 1, n);

    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans+=query(1, 1, n, v[i], n);
        update(1, 1, n, v[i]);
    }

    cout<<ans<<endl;


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
