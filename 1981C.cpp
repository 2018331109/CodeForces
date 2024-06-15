#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int mod=1e9+7;
const int N = 2e5+5;
const int INF=1e18;
int md=998244353;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int total=0, pre=0, ans=0;
    for(int i=0; i<n; i++){
            cin>>a[i];
            total+=a[i];
    }
    sort(a, a+n);
    for(int i=0;i<n;i++){
        pre+=a[i];
        int remain=total-pre;
        if(remain<=pre){
            ans=(total+1)/2+(n-i);
            if(pre==(total+1)/2){
                ans-=1;
            }
            cout<<ans<<endl;
            return;
        }
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

