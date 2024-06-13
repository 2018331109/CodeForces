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

void dfs(int i, int j, int k, int n, int m, vector<vector<char>> &grid, vector<vector<int>> &vis) {
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '.' || vis[i][j]) return;
    vis[i][j] = k;
    dfs(i + 1, j, k, n, m, grid, vis);
    dfs(i - 1, j, k, n, m, grid, vis);
    dfs(i, j + 1, k, n, m, grid, vis);
    dfs(i, j - 1, k, n, m, grid, vis);
}

void solve() {
    // taking input
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // implementing dfs function
    vector<vector<int>> vis(n, vector<int>(m, 0));

    // calling dfs function for each valid grid cell
    int it = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '#') {
                dfs(i, j, it++, n, m, grid, vis);
            }
        }
    }

    // counting group elements to same belonging parent
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j]) {
                mp[vis[i][j]]++;
            }
        }
    }

    // maximizing the answer
    // checking for each row
    int ans = 0;
    for (int i = 0; i < n; i++) {
        set<int> st;
        int sp = 0;
        for (int j = 0; j < m; j++) {
            sp += (grid[i][j] == '.');
            if (vis[i][j]) {
                st.insert(vis[i][j]);
            }
            if (i - 1 >= 0 && vis[i - 1][j]) {
                st.insert(vis[i - 1][j]);
            }
            if (i + 1 < n && vis[i + 1][j]) {
                st.insert(vis[i + 1][j]);
            }
        }
        for (auto it : st) sp += mp[it];
        ans = max(ans, sp);
    }

    // checking for each column
    for (int j = 0; j < m; j++) {
        set<int> st;
        int sp = 0;
        for (int i = 0; i < n; i++) {
            sp += (grid[i][j] == '.');
            if (vis[i][j]) {
                st.insert(vis[i][j]);
            }
            if (j + 1 < m && vis[i][j + 1]) {
                st.insert(vis[i][j + 1]);
            }
            if (j - 1 >= 0 && vis[i][j - 1]) {
                st.insert(vis[i][j - 1]);
            }
        }
        for (auto it : st) sp += mp[it];
        ans = max(ans, sp);
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++) {
        solve();
    }

    return 0;
}
