#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int M = 2000, N = 2000;

int n, m;
vector<int> a(M);
vector<char> c(M);
vector<vector<bool>> dp(M, vector<bool>(N, false));
set<int> ans;

void call(int i, int x)
{
    if (i == m)
    {
        ans.insert(x);
        return;
    }

    if (dp[i][x])
        return;

    dp[i][x] = true;

    if (c[i] == '?')
    {
        call(i + 1, (x + a[i]) % n);
        call(i + 1, ((x - a[i]) % n + n) % n);
    }
    else if (c[i] == '0')
    {
        call(i + 1, (x + a[i]) % n);
    }
    else
    {
        call(i + 1, ((x - a[i]) % n + n) % n);
    }
}

void run()
{
    int x;
    cin >> n >> m >> x;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> c[i];
    }
    call(0, x - 1);
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it + 1 << ' ';
    }
    cout << endl;
    ans.clear();
    dp.assign(M, vector<bool>(N, false));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t-- > 0)
        run();

    return 0;
}
