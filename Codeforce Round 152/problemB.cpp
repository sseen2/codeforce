#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, k; cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int in; cin >> in;
            a.push_back(in);
        }
        int cnt = 0;

        while (cnt != n) {
            int mxIdx = max_element(a.begin(), a.end()) - a.begin();

            a[mxIdx] -= k;
            if (a[mxIdx] <= 0) {
                cnt++;
                cout << mxIdx + 1 << " ";
            }
        }
        cout << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}