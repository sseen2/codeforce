#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, k; cin >> n >> k;
        int c[n];
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        if (k == 1) {
            cout << "YES\n";
            continue;
        }

        int scnt = 1, sidx = -1;
        bool start = false;
        for (int i = 1;  i < n; i++) {
            if (c[0] == c[i]) scnt++;

            if (scnt == k) {
                start = true;
                sidx = i;
                break;
            }
        }

        int ecnt = 1, eidx = -1;
        bool end = false;
        for (int i = n - 2; i >= 0; i--) {
            if (c[n - 1] == c[i]) ecnt++;

            if (ecnt == k) {
                end = true;
                eidx = i;
                break;
            }
        }
        if ((k == n && start) || sidx == n - 1) {
            cout << "YES" << "\n";
            continue;
        } 

        if (!start || !end) cout << "NO" << "\n";
        else if (start && end && sidx > eidx && c[0] == c[n-1]) cout << "YES" << "\n";
        else if (start && end && sidx > eidx ) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}