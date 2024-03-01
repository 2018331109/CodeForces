#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int md=998244353;

void solve()
{
    int n, mxp=0;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        cout<<'?'<<" "<<mxp<<" "<<mxp<<" "<<i<<" "<<i<<endl;
        char ch;
        cin>>ch;
        if(ch=='<')
        {
            mxp=i;
        }
    }

    int j=0;
    vector<int>v;
    v.clear();

    for(int i=0; i<n; i++)
    {
        cout<<'?'<<" "<<mxp<<" "<<i<<" "<<mxp<<" "<<j<<endl;
        char ch;
        cin>>ch;
        if(ch=='>')
        {
            j=i;
            v.clear();
            v.pb(i);

        }
        else if(ch=='=')
        {
            v.pb(i);
        }
    }
    if(v.size()==1)
    {
        cout<<'!'<<" "<<mxp<<" "<<j<<endl;
    }
    else
    {
        int mnp=v[0];
        for(int i=1; i<v.size(); i++)
        {
            cout<<'?'<<" "<<mnp<<" "<<mnp<<" "<<v[i]<<" "<<v[i]<<endl;
            char ch;
            cin>>ch;
            if(ch=='>')
            {
                mnp=v[i];
            }
        }
        cout<<'!'<<" "<<mxp<<" "<<mnp<<endl;
    }
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

