#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string x, outX; cin >> x;
    int idx = -1;

    for(int i = 0; i < x.size(); i++) {
        if (x[i] - '0' >= 5) {
            idx = i;
            break;
        } 
    }

    if (idx == -1) {
        cout << x << '\n';
        return;
    }

    if (idx == 0) {
        outX = "10";
        for (int i = 1; i < x.size(); i++) outX += "0";
    }
    else {
        for (int i = idx; i > 0; i--) {
            if (x[i] - '0' >= 5) {
                int n = x[i - 1];
                x[i - 1] = n + 1;
                x[i] = '0';
            }
            else break;
        }

        for (int i = idx + 1; i < x.size(); i++) {
            x[i] = '0';
        }

        if (x[0] - '0' >= 5) {
            outX = "10";
            for (int i = 1; i < x.size(); i++) outX += "0";
        }
        else outX = x;
    }

    cout << outX << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}