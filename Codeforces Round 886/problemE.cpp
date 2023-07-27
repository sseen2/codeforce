#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        ll n; cin >> n;
        ll c; cin >> c;
        ll s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        ll st = 1, en = sqrt(c); // long long 최대값
        ll w;
        while (st <= en) {
            w = (st + en + 1) / 2;
            //cout << "st: " << st << ", en: " << en << ", mid: " << w << "\n";
            ll area = 0;
            for (ll i = 0; i < n; i++) {
                area += (ll) (2 * w + s[i]) * (2 * w + s[i]);
                if (area > c) break;
                //cout << "area: " << area << "\n";
            }
            
            if (area <= c) st = w;
            else en = w - 1; 
            if (area < 0) break;
            if (area == c) break;
        }

        
        cout << w << '\n';
    }

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}