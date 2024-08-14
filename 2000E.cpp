#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;
    //vector<int>v(n, vector<int>(m, 0));
    int q;
    cin>>q;
    vector<int>v(q, 0);
    for(int i=0; i<q; i++) cin>>v[i];
    vector<int>nums;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int ux=min(n-k, i);
            int lx=max(0ll, i-k+1);
            int uy=min(m-k, j);
            int ly=max(0ll, j-k+1);
            int num=(ux-lx+1)*(uy-ly+1);
            nums.pb(num);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    sort(nums.begin(), nums.end(), greater<int>());
    int ans=0;
    int i=0;
    while(i<q)
    {
        ans+=(v[i]*nums[i]);
        i++;
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
    for (int tc = 0; tc < test; ++tc)
    {
        solve();
    }

    return 0;
}
