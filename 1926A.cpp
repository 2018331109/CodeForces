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
    string s;
    cin>>s;
    int n=s.size();
    int a=0, b=0;
    for(auto it:s)
    {
        if(it=='A')
        {
            a++;
        }
    }
    b=n-a;
    if(a>=b)
    {
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"B"<<endl;
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
