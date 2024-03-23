#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;

int a[N], goal[N];
vector<int> g[N], ans;
int mark[N];

void dfs(int r, int x, int y) {
    mark[r] = 1;
    if (a[r] ^ x != goal[r]) {
        ans.pb(r);
        x = x ^ 1;
    }

    for (int i = 0; i < g[r].size(); i++) {
        if (!mark[g[r][i]]) {
            dfs(g[r][i], y, x);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        g[x].pb(y), g[y].pb(x);
    }

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> goal[i];
    }

    dfs(1, 0, 0);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for (int tc = 1; tc <= test; tc++) {
        solve();
    }

    return 0;
}
