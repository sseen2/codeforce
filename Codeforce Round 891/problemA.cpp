#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, a; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 != 0) cnt++;
    }
    if (cnt % 2 == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}