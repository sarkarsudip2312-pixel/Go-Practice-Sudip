
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll k, s;
    string target;
    cin >> n >> k >> s >> target;

    if (s < n) {
        cout << -1 << '\n';
        return;
    }

    ll L = k + 1;

    if (target == "Alice") {
        if (s == n && n % L == 0) {
            cout << -1 << '\n';
            return;
        }

        for (int i = 0; i < n - 1; i++) {
            cout << 1 << ' ';
        }
        cout << s - n + 1 << '\n';
        return;
    }

    if (L > n || s % L != 0) {
        cout << -1 << '\n';
        return;
    }

    ll x = s / L;
    ll cap = n / L;

    vector<ll> cnt(61, 0);
    ll groups = 0;

    for (int b = 0; b < 61 && x > 0; b++) {
        ll take = min(cap, x);

        if ((take & 1LL) != (x & 1LL)) {
            take--;
        }

        cnt[b] = take;
        groups += take;
        x = (x - take) / 2;
    }

    if (x > 0 || groups * L < n) {
        cout << -1 << '\n';
        return;
    }

    vector<ll> a(n, 0);
    int pos = 0;

    for (int b = 0; b < 61; b++) {
        ll need = cnt[b] * L;

        for (ll j = 0; j < need; j++) {
            a[pos] |= (1LL << b);
            pos++;
            if (pos == n) pos = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
