#include<bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=2e5+5;

void solve()
{
    int n, m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    int l=0, r=n-1;
    for(auto it:s)
    {
        if(it=='L')
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    int b[n];
    int ind=n-1;
    int pro=1;

    reverse(s.begin(), s.end());
    for(int i=0; i<n; i++)
    {
        char it=s[i];
        if(it=='L')
        {
            pro*=a[--l];
            pro%=m;
            b[ind--]=pro;
        }
        else
        {
            pro*=a[++r];
            pro%=m;
            b[ind--]=pro;
        }


    }

    for(auto it:b)
    {
        cout<<it<<" ";
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
