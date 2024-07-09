#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Function to check conditions
bool check(vector<int> v, ll x, vector<vector<ll>>& vp)
{
    ll sum = 0;
    int ind = 0;
    int l = 0;
    vector<pair<int, pair<int, int>>> ans;
    for (int i = 0; i < vp[ind].size(); i++)
    {
        sum += vp[v[ind]][i];
        if (sum >= x)
        {
            ans.push_back({v[ind], {l, i}});
            ind++;
            sum = 0;
            l = i + 1;
            if (ind == 3) break;
        }
    }
    if (ind == 3)
    {
        sort(ans.begin(), ans.end());
        for (auto& it : ans)
        {
            cout << it.second.first + 1 << " " << it.second.second + 1 << " ";
        }
        cout << "\n";
        return true;
    }
    else
    {
        return false;
    }
}

void asquare()
{
    ll n;
    cin >> n;
    vector<vector<ll>> vp(3, vector<ll>(n));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vp[i][j];
        }
    }
    ll x = (accumulate(vp[1].begin(), vp[1].end(), 0LL) + 2) / 3;
    if (check({0, 1, 2}, x, vp)) return;
    if (check({0, 2, 1}, x, vp)) return;
    if (check({1, 0, 2}, x, vp)) return;
    if (check({1, 2, 0}, x, vp)) return;
    if (check({2, 1, 0}, x, vp)) return;
    if (check({2, 0, 1}, x, vp)) return;
    cout << "-1\n";
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        asquare();
    }
    return 0;
}
