#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, tmp, cnt = 0; cin >> n;
    int p[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] == i + 1) cnt++;
    }
    if(cnt == 0) cout << cnt << endl;
    else cout << (cnt + 1) / 2 << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t = 1;
  cin >> t;
  while(t--)
    solve();
}