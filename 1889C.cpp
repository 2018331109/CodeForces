#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;
string a, b;

int call(int i)
{
    int j=0;
    int cnt=0;
    while(j<a.size() and i<b.size())
    {
        if(a[j]==b[i])
        {
            cnt++;
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    return cnt;
}


void solve()
{

    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int up=0, down=0, common=0, dabba=0;
    int es=0, se=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1 and b[i]==1) common++;
        else if(a[i]==1) up++;  //confirm
        else if(b[i]==1) down++; //confirm
        else if(a[i]==-1 and b[i]==-1) dabba++;
    }
    while(common-->0)
    {
        if(up<down)up++;
        else down++;
    }
    while(dabba-->0)
    {
        if(up>down) up--;
        else down--;
    }

    cout<<(min(up, down))<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
