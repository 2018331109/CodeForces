#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back

void solve()
{
     int n;
     cin>>n;
     map<int, int>mp;
     mp.clear();
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         mp[arr[i]]=i;
     }
     set<int>st;
     int ans=0, cnt=0;
     for(int i=0;i<n;i++)
     {
         if(st.find(arr[i]) == st.end())
         {
             cnt++;
         }
         if(mp[arr[i]]==i)
         {
             ans+=cnt;
         }
         st.insert(arr[i]);
     }

     cout<<ans<<endl;

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
