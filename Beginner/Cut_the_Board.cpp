#include<bits/stdc++.h>
using namespace std;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_testCases;
	cin >> n_testCases;

	while (n_testCases--) {
		int n, m;
		cin >> n >> m;
		cout << (n - 1)*(m - 1) << endl;
	}

	return 0;
}