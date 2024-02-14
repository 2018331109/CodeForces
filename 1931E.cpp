#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=2e5+5;

void solve()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>zeros;
    int mm=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int xx=x;
        int cnt=0;
        while(xx%10==0)
        {
            xx/=10;
            cnt++;
        }
        if(cnt)
        {
            zeros.pb(cnt);
        }
        string s=to_string(x);
        mm+=s.size();
    }
    int rm=0;
    sort(zeros.rbegin(), zeros.rend());
    for(int i=0; i<zeros.size(); i+=2)
    {
        rm+=zeros[i];
    }
    if(mm-rm>m)
    {
        cout<<"Sasha"<<endl;
    }
    else
    {
        cout<<"Anna"<<endl;
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
