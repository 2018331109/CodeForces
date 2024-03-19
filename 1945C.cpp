#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;
vector<int>a(N, 0), b(N, 0);
int n, m, ans=INF;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    s+="x";
    int cnt=0, cnt1=0;
    for(auto it:s)
    {
        cnt1+=(it=='1');
    }
    int ans=0, mn=INT_MAX;
    for(int i=0; i<=n; i++)
    {
        if(cnt*2>=i and cnt1*2>=(n-i))
        {
            int tmp=abs(n-2*i);
            if(tmp<mn)
            {
                mn=tmp;
                ans=i;
            }
        }
        if(s[i]=='1')
        {
            cnt1--;
        }
        else
        {
            cnt++;
        }
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
