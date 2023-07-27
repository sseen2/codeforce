#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        int mx = 0, idx = 0;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            if (a > 10) continue;
            if (mx < b) {
                mx = b;
                idx = i + 1;
            }
        }
        cout << idx << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}