#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

int a[500005],f[500005];
stack <int> st;

void solve()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        f[i]=0;
    }
    int z=count(a+1,a+n+1,0);
    if (z!=1)
    {
        cout<<"NO"<<"\n";
        return;
    }
    while (st.size())
    {
        st.pop();
    }
    for (int i=1; i<=n; i++)
    {
        while (st.size()&&a[i]<=a[st.top()])
        {
            st.pop();
        }
        if (st.size()&&a[st.top()]+1==a[i])
        {
            f[i]=1;
        }
        st.push(i);
    }
    while (st.size())
    {
        st.pop();
    }
    for (int i=n; i>0; i--)
    {
        while (st.size()&&a[i]<=a[st.top()])
        {
            st.pop();
        }
        if (st.size()&&a[st.top()]+1==a[i])
        {
            f[i]=1;
        }
        st.push(i);
    }
    for (int i=1; i<=n; i++)
    {
        if (!f[i]&&a[i])
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
