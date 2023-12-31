#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define fs first
#define sc second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n;
    cin>>n;
    int cnt=n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cnt--;
    cout<<"196" + string(n-3, '0')<<endl;

    for(int i=0; i*2+3<=n; i++)
    {

        cout<<"1"+string(i, '0')+"6"+string(i, '0')+"9"+string(n-(i*2+3), '0')<<endl;

        cout<<"9"+string(i, '0')+"6"+string(i, '0')+"1"+string(n-(i*2+3), '0')<<endl;
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
