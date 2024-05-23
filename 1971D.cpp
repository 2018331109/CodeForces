






#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 107;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    int f=0;
    int cnt=1;
    int op=0;
    while(i<n and s[i]=='0')
    {
        i++;
    }
    int j=n-1;
    while(j>i and s[j]=='0')
    {
        j--;
        f=1;
    }
    cnt+=f;
    int start=i;
    while(i<j)
    {
        if(s[i]=='0')
        {
            op++;
            cnt+=2;
            while(i<j and s[i]=='0')
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    if(start==0 and op)
    {
        cnt--;
    }
    cout<<cnt<<endl;

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
