  /*
    author: Rishi Mohan Jha
    created_at: 17-10-2022  08:04 PM
*/

#include<bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define ll     long long
#define ff     first
#define ss     second
#define pb     push_back
#define sz(x)  ((int)(x).size())
#define all(a) (a).begin(),(a).end()

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

	int i = m - 1, last = m + n - 1, j = n - 1;

	while (j >= 0 && i >= 0) {

		if (nums2[j] > nums1[i]) {
			nums1[last] = nums2[j];
			--last;
			--j;
		}
		else {
			nums1[last] = nums1[i];
			--last;
			--i;
		}
	}

	while (j >= 0) {
		nums1[last] = nums2[j];
		--last;
		--j;
	}
}

void Solve() {
	int m, n;
	cin >> m >> n;

	vector<int> nums1(m + n), nums2(n);

	for (int i = 0; i < m + n; i++)
		cin >> nums1[i];

	for (int i = 0; i < n; i++)
		cin >> nums2[i];

	merge(nums1, m , nums2, n);

	for (int i = 0; i < n + m; i++) {
		cout << nums1[i] << ' ';
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int T = 1;
	while (T--) Solve();

}
