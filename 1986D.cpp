#include<bits/stdc++.h>
using namespace std;



void solve()
{
  int n;
  cin>>n;

  string a;
  cin>>a;

  if(n<3) {
   cout<<(a[0]-'0')*10 + (a[1] -'0')<<endl; return;}
   int ans = INT_MAX,cntall=0;


   for(int i=0 ; i<n-1 ; i++)
   {
      int k = (a[i]-'0')*10 + (a[i+1]-'0');
      int cnt=k;
     
      for(int j=0 ; j<n ;j++)
      {
         if(j != i && j != i+1)
         {
            cnt = min((a[j]-'0')+cnt,(a[j]-'0')*cnt);
         }
      }

      ans = min(ans,cnt);
      
   }
   int ans2 = ans;
   cout<<ans2<<endl;

}

signed main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
       solve();
}


 
