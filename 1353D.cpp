#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N=3e5;

void solve()
{
    int n;
    cin>>n;
    set<pair<int, pair<int, int>>>st;

    st.insert({n, {1, n}});
    vector<int>v(n+1, 0);

    int cnt=1;
    while(!st.empty())
    {
        int l=st.begin()->ss.ff;
        int r=st.begin()->ss.ss;
        st.erase(st.begin());
        if(l>r)
        {
            continue;
        }
        if(l==r)
        {
            v[l]=cnt++;
            continue;
        }

        int m=(l+r)/2;
        v[m]=cnt++;
        st.insert({-(m-l),{l, m-1}});
        st.insert({-(r-m),{m+1, r}});
    }

    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
