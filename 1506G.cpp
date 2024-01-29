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
    string s;
    cin>>s;
    map<char, int>mp;
    map<char, bool>taken;
    stack<char>ans;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        mp[s[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        int r=i;
        if(taken[s[i]])
        {
            continue;
        }
        bool f=1;
        while(!ans.empty())
        {
            int tp=ans.top();
            if(tp<ch and mp[tp]>r)
            {
                taken[tp]=0;
                ans.pop();
            }
            else
            {
                break;
            }
        }
        ans.push(ch);
        taken[ch]=1;
    }

    string res;
    while(!ans.empty())
    {
        res+=ans.top();
        ans.pop();

    }

    reverse(res.begin(), res.end());

    cout<<res<<endl;



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
