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
//    string s="0000000000000000000000000000000";
//    cout<<s.size()<<endl;
//    cout<<(1ll<<31)<<endl;

    int n;
    cin>>n;
    map<int, int>mp;
    int a[n];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a[i]=x;

        mp[x]++;
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        int op=((1ll<<31)-1)^a[i];
        int c1=mp[a[i]];
        int c2=mp[op];
        int c12=min(c1, c2);
        cnt+=c12;
        cnt+=max(c1, c2)-c12;
        mp[a[i]]=0;
        mp[op]=0;
    }

    cout<<cnt<<endl;
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
