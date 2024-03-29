#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=2e5+5;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    multiset<int>st;
    for(int i=0; i<c; i++)
    {
        st.insert(0);
    }
    for(int i=0; i<b; i++)
    {
        if(st.empty())
        {
            cout<<-1<<endl;
            return;
        }
        int x=*st.begin();
        x++;
        st.erase(st.begin());
        st.insert(x);
    }
    for(int i=0; i<a; i++)
    {
        if(st.size()<2)
        {
            cout<<-1<<endl;
            return;
        }
        st.erase(st.begin());
        int x=*st.begin();
        st.erase(st.begin());
        st.insert(x+1);
    }
    if(st.size()==1)
    {
        cout<<*st.begin()<<endl;
    }
    else
    {
        cout<<-1<<endl;
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
