#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// set the value of 'res' to the first element of the sequence
		int res = a[0];
		for (int i = 1; i < n; i++) {
			// then we iterate over the sequence and make 'res = res & a[i]'
			res &= a[i];
		}
		cout << res << '\n';
	}
	return 0;
}
