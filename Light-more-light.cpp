#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	unsigned int n, sq;
	while (cin >> n) {
		if (n == 0) break;
		sq = sqrt(n);
		string ans = (sq * sq == n) ? "yes" : "no";
		cout << ans << "\n";
	}
	return 0;
}