#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
typedef pair<int,int>PII;

vector<PII>sum[4];

int suan(int op,int x){
	
	int l = 0, r = sum[op].size() - 1;
	while(l < r){
		int mid = l + r >> 1;
		if(sum[op][mid].first >= x) r = mid;
		else l = mid + 1;
	}
	if(sum[op].size() == 0) return 1e9;
	if(sum[op][l].first < x) return 1e9;
	return sum[op][l].second;
}

map<string,int>mp;

int main(){
	mp["U"] = 0;
	mp["D"] = 1;
	mp["L"] = 2;
	mp["R"] = 3;
	int t;
	cin >> t;
	while(t -- ){
		for(int i = 0; i < 4; i ++) sum[i].clear();
		
		int a, b, n , m;
		cin >> a >> b >> n >> m;
		vector<PII>nums(n);
		for(int i = 0; i < n; i ++) cin >> nums[i].first >> nums[i].second;
		for(int i = 0; i < m; i ++){
			string s; 
			int x;
			cin >> s >> x;
			int op = mp[s];
			if(sum[op].size() > 0)sum[op].push_back({sum[op].back().first + x, i});
			else sum[op].push_back({x, i});
		}
		
		int ans[2] = {0};
		for(auto [x, y] : nums){
			int ans1 = min(suan(0, x), suan(1, a - x + 1));
			int ans2 = min(suan(2, y), suan(3, b - y + 1));
			
			ans1 = min(ans1, ans2);
// 			cout << ans1 <<'\n';
			if(ans1 == 1e9) continue;
			ans[ans1 % 2] ++;
		}
		
		cout << ans[0] << ' ' << ans[1] <<'\n';
	}
}
