#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        sort(a, a + n);
        int color = 0;

        for (int i = 0; i < n / 2; i++) { 
            color += a[n - i - 1] - a[i];
        }
        cout << color << '\n';
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}