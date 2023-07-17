#include <bits/stdc++.h>
using namespace std;
 
long long a[200005];
 
void solve() {
    int t;
    cin >> t;
    while (t-- > 0) {
        long n;
        cin >> n;
        int cnt = 0;
        long long sum = 0, num = 0;
        a[n] = 1;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                sum += -a[i];
                cnt++;
                for (int j = i + 1; j < n; j++) {
                    if (a[j] == 0) {
                        continue;
                    }
                    else if (a[j] > 0) {
                        break;
                    }
                    else if (a[j] < 0) {
                        i = j;
                        sum += -a[j];
                    }
                }
                continue;
            }
            sum += a[i];
        }
 
        cout << sum << " " << cnt << "\n";
    }
}
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}