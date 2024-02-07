#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pb push_back

void solve()
{
    int n;
    int k;
    cin>>n>>k;
    vector<int>ans(n+1);
    int l=1, r=n;
    for(int i=1; i<=k; i++)
    {
        for(int j=i; j<=n; j+=k)
        {
            if(i%2)
            {
                ans[j]=l++;
            }
            else
            {
                ans[j]=r--;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
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
