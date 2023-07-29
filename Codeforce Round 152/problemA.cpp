#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int b, c, h; cin >> b >> c >> h;

        if (b - 1 > c + h) cout << c + h + (c + h + 1) << '\n';
        else if (b - 1 < c + h) cout << b + (b - 1) << '\n';
        else cout << b + (b - 1) << '\n';
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}