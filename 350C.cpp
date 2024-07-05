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
     int n;
     cin>>n;
     pair<int, pair<int, int>>p[n];
     int sum=0, x, y;
     for(int i=0;i<n;i++){
        cin>>x>>y;
        p[i]=make_pair(abs(x)+abs(y), make_pair(x, y));
        if(abs(x) and abs(y)) sum+=2;
        else sum+=1;
     }
     sort(p, p+n);
     cout<<(sum+n)*2<<endl;
     for(int i=0;i<n;i++){
        x=p[i].ss.ff, y=p[i].ss.ss;
        if(abs(x)){
            cout<<1<<" "<<abs(x)<<" ";
            cout<<((x>0)? "R": "L")<<endl;
        }
        if(abs(y)){
            cout<<1<<" "<<abs(y)<<" ";
            cout<<((y>0)? "U": "D")<<endl;
        }
        cout<<2<<endl;
         if(abs(x)){
            cout<<1<<" "<<abs(x)<<" ";
            cout<<((x>0)? "L": "R")<<endl;
        }
        if(abs(y)){
            cout<<1<<" "<<abs(y)<<" ";
            cout<<((y>0)? "D": "U")<<endl;
        }
        cout<<3<<endl;
     }
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
