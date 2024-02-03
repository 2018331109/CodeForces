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
const int N = 1e5;

void solve()
{
    string base = "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    for (int i = 0; i < m; i++)
    {
        char a, b;
        cin >> a >> b;

        for (int j = 0; j < 94; j++)
        {
            if (base[j] == a)
            {
                base[j] = b;
            }
            else if (base[j] == b)
            {
                base[j] = a;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        s[i] = base[s[i] - '!'];
    }

    cout << s << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }
    return 0;
}
