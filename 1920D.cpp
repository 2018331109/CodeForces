#include<bits/stdc++.h>
using namespace std;

#define pb push_back

#define int long long int
int mx=1e18;

map<int, int>mp;
vector<int>v;

int call(int x)
{
    int ind=upper_bound(v.begin(), v.end(), x)-v.begin();
    ind--;
    if(v[ind]==x)
    {
        return mp[v[ind]];
    }

    x=x%v[ind];
    if(x==0)
    {
        x=v[ind];
    }
    return call(x);
}

void solve()
{
    int n;
    cin>>n;
    //v.resize(n);
    mp.clear(), v.clear();

    int q;
    cin>>q;
    int sz=0;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        if(a==1)
        {
            sz++;
            mp[sz]=b;
            v.pb(sz);
        }
        else
        {
            int ssz;
            if(mx/(b+(int)1) < sz)
            {
                ssz=mx;
            }
            else
            {
                ssz=(sz*b)+sz;
            }

            sz=ssz;
        }
    }

    for(int i=0; i<q; i++)
    {
        int qr;
        cin>>qr;
        int ans=call(qr);
        cout<<ans<<" ";
    }
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
