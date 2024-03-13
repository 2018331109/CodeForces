#include <bits/stdc++.h>
using namespace std;
#define int long long
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
int a[N], d[N];

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    set<int>st;
    if(n==1)
    {
        cout<<-1<<endl;
        return;
    }

    if(n==2)
    {
        int dif=a[1]-a[0];
        st.insert(a[0]-dif);
        st.insert(a[1]+dif);
        if(dif%2==0)
        {
            st.insert(a[0]+dif/2);
        }
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            d[i]=a[i+1]-a[i];
        }
        sort(d, d+n-1);
        // when all the differences are equal;
        if(d[0]==d[n-2])
        {
            st.insert(a[0]-d[0]);
            st.insert(a[n-1]+d[0]);
        }
        else if(d[0]==d[n-3])
        {
            for(int i=0;i<n-1;i++)
            {
                if(a[i+1]-a[i]==2*d[0] and a[i+1]-a[i]!=d[0])
                {
                    st.insert(a[i]+d[0]);
                }
            }
        }
    }

    cout<<st.size()<<endl;
    for(auto it:st)
    {
        cout<<it<<" ";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
