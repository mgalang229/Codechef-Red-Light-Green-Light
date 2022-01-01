#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// count the numbers that are greater than k
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cnt += (a[i] > k);
		}
		cout << cnt << '\n';
	}
	return 0;
}