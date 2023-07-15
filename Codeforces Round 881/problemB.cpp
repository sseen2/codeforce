#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t-- > 0) {
        long n;
        cin >> n;
        long long a[n];
        int num = 0, count = 1, start = 0, end = 0;
        long long sum = 0;
        bool first = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0 && first) { // 시작 음수
                first = false;
                start = i;
            }
            else if (a[i] < 0) { // 끝 음수
                end = i;
            }
        }
        
        if (end == 0) {
            end = start;
        }
        for (int i = start; i <= end; i++) {
            a[i] = -a[i];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                count++;
                a[i] = -a[i];
            }
            sum += a[i];
        }

        cout << sum << " " << count << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}