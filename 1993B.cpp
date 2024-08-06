#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    int n;
    cin>>n;
    vector<int>odd, even;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x%2) odd.pb(x);
        else even.pb(x);
    }
    if(even.size()==0 or odd.size()==0)
    {
        cout<<0<<endl;
        return;
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int sum=odd[odd.size()-1];
    int i=0, ans=even.size();
    while(i<even.size())
    {
        if(sum<even[i])
        {
            ans++;
            break;
        }
        sum+=even[i];
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
