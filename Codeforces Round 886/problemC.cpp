#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        for (int i = 0; i < 64; i++) {
            char c; cin >> c;
            if (c == '.') continue;
            else cout << c;
        }
        cout << "\n";
    } 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}