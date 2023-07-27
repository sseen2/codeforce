#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, k; cin >> n >> k;
       
        int maxcnt = 0, cnt = 0;
        int pb[n]; 
        for (int i = 0; i < n; i++) cin >> pb[i];
        if (n == 1) {
            cout << 0 << "\n";
            continue; 
        }
        sort(pb, pb + n);

        for (int i = 0; i < n - 1; i++) {
            if (pb[i + 1] - pb[i] <= k) {
                cnt++;
            }
            else {
                if (maxcnt < cnt) maxcnt = cnt;
                cnt = 0;
            }
            //cout << i << ": " << pb[i] << " " << i + 1 << ": " << pb[i + 1] << ", maxcnt: " <<  maxcnt << ", cnt: " << cnt << "\n";
        }
        if (maxcnt < cnt) maxcnt = cnt;
        //cout << "maxcnt: " <<  maxcnt << "\n";

        cout << n - maxcnt - 1 << '\n';
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}