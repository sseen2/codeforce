#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}