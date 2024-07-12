#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s += 'L'; // Adding 'L' at the end to ensure loop breaks if it reaches the end
    int cur = 0;
    bool done = true;

    while (true)
    {
        for (int i = 1; i <= m; i++)
        {
            cur++;
            if (cur > n) break;
            if (s[cur - 1] == 'L') break; // Check for 'L' and break the loop
        }
        if (cur > n) break; // Break if cur exceeds n
        if (s[cur - 1] == 'L') continue; // Continue if 'L' is found
        if (s[cur - 1] == 'C')
        {
            done = false; // Set done to false if 'C' is found
            break;
        }
        while (k > 0)
        {
            cur++, k--;
            if (cur > n) break;
            if (s[cur - 1] == 'L') break; // Check for 'L' and break the loop
            if (s[cur - 1] == 'C')
            {
                done = false; // Set done to false if 'C' is found
                break;
            }
        }
        if (cur > n) break;
        if (s[cur - 1] == 'W')
        {
            done = false; // Set done to false if 'W' is found
            break;
        }
    }

    if (done) yes;
    else no;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;
    for (int tc = 0; tc < test; tc++)
    {
        solve();
    }

    return 0;
}
