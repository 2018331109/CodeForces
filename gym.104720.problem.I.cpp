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


    int n;
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int cnt=0;
        while(!st.empty())
        {
            int tp=st.top();
            if(tp<x)
            {
                cnt++;
                st.pop();
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
        st.push(x);
    }
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
