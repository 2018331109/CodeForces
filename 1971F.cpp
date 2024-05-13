#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    int r;
    cin>>r;
    int j=r;
    int ans=0;
    for(int i=0; i<=r; i++)
    {
        while((i*i)+(j*j) >= (r+1)*(r+1))
        {
            j--;
        }

        int k=j;
        while(k>0 and (i*i)+(k*k) >= (r*r))
        {
            k--;
            ans++;
        }
    }
    cout<<(ans*4ll)<<endl;
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
