#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void op(char &ch, int x)
{
    ch=char('0'+(ch-'0'+x)%3);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            while (a[i][j] != b[i][j])
            {
                op(a[i][j], 1);
                op(a[i + 1][j], 2);
                op(a[i][j + 1], 2);
                op(a[i + 1][j + 1], 1);
            }
        }
    }

    if (a == b) yes;
    else no;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}
