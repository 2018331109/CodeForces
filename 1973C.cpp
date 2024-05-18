#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;

void solve()
{
    int n;
    cin>>n;
    int a=-1, b=-1, c=-1;
    vector<int>v(n, 0);
    int ind=-1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==n)
        {
            ind=i;
        }

    }

    //cout<<"ind "<<ind<<endl;
    vector<int>vis(n, 0);
    vector<pair<int, int>>nebo, debo;
    for(int i=ind; i>=0; i-=2)
    {
        nebo.push_back({v[i], i});
        vis[i]=1;
    }
    for(int i=ind+2; i<n; i+=2)
    {
        nebo.pb({v[i], i});
        vis[i]=1;
    }
    for(int i=0; i<n; i++)
    {
        if(vis[i]==0)
        {
            debo.pb({v[i], i});
        }
    }
    sort(debo.begin(), debo.end());
    sort(nebo.begin(), nebo.end());
    //cout<<"nebo "<<nebo.size()<<endl;
    int cnt=debo.size();
    vector<int>ans(n, 0);
    for(auto it:debo)
    {
        ans[it.ss]=cnt--;
    }
    cnt=n;
    for(auto it:nebo)
    {
        ans[it.ss]=cnt--;
    }
    for(auto it:ans)
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
