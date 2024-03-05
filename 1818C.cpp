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
const int mod=100;
const int N=200005;
vector<int>ans(N);

void solve()
{
    int n, q;
    cin>>n>>q;
    int a[n+2], prefix[n+2];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    prefix[0]=prefix[1]=prefix[2]=0;
    for(int i=3; i<=n; i++)
    {
        prefix[i]=prefix[i-1];
        if(a[i-2]>=a[i-1] and a[i-1]>=a[i])
        {
            prefix[i]++;
        }
    }

//    for(auto it:prefix)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        int len=r-l+1;
        if(len<3)
        {
            cout<<len<<endl;
            continue;
        }
        int cnt=prefix[r]-prefix[l-1];
        //cout<<cnt<<endl;
        if(l>2 and a[l-2]>=a[l-1] and a[l-1]>=a[l])
        {
            cnt--;
        }
        if(l>1 and a[l-1]>=a[l] and a[l]>=a[l+1])
        {
            cnt--;
        }
        cout<<len-cnt<<endl;

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
