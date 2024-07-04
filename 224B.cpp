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

void solve()
{
    int n, k;
    cin>>n>>k;
    unordered_map<int, int>mp;
    int cnt=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        mp[x]++;
        if(mp[x]==1) cnt++;
    }
    if(cnt<k)
    {
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    int ind=0;
    for(int i=0; i<n; i++)
    {
        mp[a[i]]--;
        if(mp[a[i]]==0)
        {
            cnt--;
        }
        if(cnt==k-1)
        {
            ind=i;
            break;
        }
    }
    mp[a[ind]]++;
    cnt++;
    int j=n-1;
    while(j>ind){
        mp[a[j]]--;
        if(mp[a[j]]==0){
            cnt--;
            if(cnt==k-1){
                break;
            }
        }
        j--;
    }
    cout<<ind+1<<" "<<j+1<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    //cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
