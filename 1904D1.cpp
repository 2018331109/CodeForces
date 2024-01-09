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

int d[102][10004];

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int f=0;

    for(int i=0; i<n; i++)
    {
        int ok=-1;
        for(int j=i; j>=0; j--)
        {
            if(a[j]==b[i])
            {
                ok=1;
                break;
            }
            if(a[j]>b[i] || b[j]<b[i])
            {
                break;
            }
        }
        if(ok==1)
        {
            continue;
        }

        for(int j=i; j<n; j++)
        {
            if(a[j]==b[i])
            {
                ok=1;
                break;
            }
            if(a[j]>b[i] || b[j]<b[i])
            {
                break;
            }
        }
        if(ok!=1)
        {
            no;
            return;
        }
    }

    yes;
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
