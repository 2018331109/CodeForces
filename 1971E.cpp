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
const int N = 107;

void solve()
{
    int n, k, q;
    cin>>n>>k>>q;
    vector<int>a(k+1, 0), b(k+1, 0);
    for(int i=1;i<=k;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=k;i++)
    {
        cin>>b[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
        int lb=lower_bound(a.begin(), a.end(), x)-a.begin();
        if(lb<=k and a[lb]==x)
        {
            cout<<b[lb]<<" ";
            continue;
        }
        else
        {
            lb-=1;
            int extra=x-a[lb];
            int dis=a[lb+1]-a[lb];
            int time=b[lb+1]-b[lb];
            int ans=b[lb]+(extra*time)/dis;

//            double extra=(double)(x-a[lb]);
//            double speed=((double)(a[lb+1]-a[lb])/(double)(b[lb+1]-b[lb]));
//            cout<<"sd "<<dis<<" "<<speed<<endl;
//            double ans=(double)b[lb]+(double)(dis/speed);
            cout<<ans<<" ";
        }
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
