#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N=3e5;

void solve()
{
    int a, b, r;
    cin>>a>>b>>r;

    if(b>a)
    {
        swap(a, b);
    }

    int need=0;
    int i;
    for(i=63; i>=0; i--)
    {
        int aa=(1ll<<i)&a;
        int bb=(1ll<<i)&b;

        if(aa==bb)
        {
            continue;
        }
        break;
    }

    int dif=(1ll<<(i));
    //cout<<"dif " <<dif<<endl;

    i--;
    //cout<<i<<endl;
    while(i>=0)
    {

        //cout<<((1ll<<i)&a)<<" "<<((1ll<<i)&b)<<endl;
        if(((1ll<<i)&a)!=0 and ((1ll<<i)&b)==0)
        {
            //cout<<"both 1, 0"<<endl;
            if(r>=(1ll<<i))
            {
                r-=(1ll<<i);
                dif-=(1ll<<i);
            }
            else
            {
                dif+=(1ll<<i);
            }

        }
        else if(((1ll<<i)&a)==0 and ((1ll<<i)&b)!=0)
        {
            //cout<<"both 0, 1"<<endl;
            dif-=(1ll<<i);
        }
        i--;
    }

    cout<<dif<<endl;

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

