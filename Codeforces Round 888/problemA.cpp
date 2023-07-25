#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, m, k, H, cnt = 0;
        cin >> n >> m >> k >> H;

        int h;
        for (int i = 0; i < n; i++) {
            cin >> h; 
            for (int j = 1; j < m; j++) {
                if (h == H - (k * j) || h == H + (k * j)) cnt++;
            }
        }

        cout << cnt << '\n';
        
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}