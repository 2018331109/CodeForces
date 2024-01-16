#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;
#define line cout<<endl;
int mod = 1e9 + 7;

void solve( )
{
    int n;
    cin>>n;
    if(n<7)
    {
        no;
        return;
    }

    int f=0;

    for(int i=2; i<=sqrt(n); i++)
    {
        int k=1;
        int kk=i;
        while(k<n)
        {
            k+=kk;
            kk*=i;
        }

        if(k==n)
        {
            f=1;
            break;
        }
    }

    if(f)
    {
        yes;
    }
    else
    {
        no;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
