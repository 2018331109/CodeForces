#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    int n, k, m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    string ans;
    set<char>st;
    int total=0;
    for(int i=0; i<m; i++)
    {
        st.insert(s[i]);
        if(st.size()==k)
        {
            ans+=s[i];
            st.clear();
            total++;
        }
    }

    if(total>=n)
    {
        yes;
        return;
    }
    no;
    cout<<ans;
    char ch;
    for(int i=0; i<k; i++)
    {
        ch=char('a'+i);
        if(st.find(ch)==st.end())
        {
            break;
        }
    }
    for(int i=ans.size(); i<n; i++)
    {
        cout<<ch;
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
