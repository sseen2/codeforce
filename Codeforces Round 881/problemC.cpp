#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t-- > 0) {
        long long n;
        cin >> n;
        long long sum = 0;
        while (n != 1) {
            sum += n;
            n /= 2;
        }

        cout << sum + 1 << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}