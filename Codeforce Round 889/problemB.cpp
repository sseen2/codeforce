#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, cnt = 0; cin >> n;
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
        else break;
    }
    cout << cnt << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t = 1;
  cin >> t;
  while(t--)
    solve();
}