#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=5005;
vector<int>freq(N, 0);
int ans=0;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    freq[0]=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
        int cur=a[i];
        for(int j=0; j<5001; j++)
        {
            if(freq[j]==0)
            {
                continue;
            }
            if(j<=cur)
            {
                ans+=(freq[j]*cur)%md;
            }
            else
            {
                ans+=(((cur+j+1)/2)*freq[j])%md;
            }
            ans%=md;
        }
        for(int j=5000; j>=0; j--)
        {
            if(freq[j]>0)
            {
                freq[j+cur]=(freq[j+cur]+freq[j])%md;
            }
        }
    }
    cout<<(ans+md)%md<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
