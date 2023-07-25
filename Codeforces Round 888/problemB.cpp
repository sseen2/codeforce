#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        int a[n], cpy[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cpy[i] = a[i];
        }
        sort(cpy, cpy+n);

        bool flag = false;
        for (int i = 0; i < n; i++) {
            if ((cpy[i] + a[i]) % 2 != 0) {
                flag = true;
                break;
            }
        }

        if (flag) cout << "NO" << "\n";
        else cout << "YES" << "\n";
        
        // 정렬된거랑 안된거랑 비교했을때, 짝수 자리는 짝수, 홀수 자리는 홀수
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}