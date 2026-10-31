#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int MAXM = 100;

int a[1000005];

ull lowMask[101][100], highMask[101][100];

void precompute() {
    for (int m = 2; m <= MAXM; m++) {
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < m; y++) {

                ll val = 1LL * x * x * x * y
                       - 1LL * x * y * y * y;

                if (val % m == 0) {
                    if (y < 64)
                        lowMask[m][x] |= (1ULL << y);
                    else
                        highMask[m][x] |= (1ULL << (y - 64));
                }
            }
        }
    }
}

void solve() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int l, r, m;
        cin >> l >> r >> m;

        ull seenLow = 0, seenHigh = 0;
        int pos[100] = {};

        bool found = false;

        for (int i = l; i <= r && i < l + m + 1; i++) {

            int rem = a[i] % m;

            ull x = lowMask[m][rem] & seenLow;
            ull y = highMask[m][rem] & seenHigh;

            if (x || y) {
                int other;

                if (x) {
                    other = __builtin_ctzll(x);
                } else {
                    other = __builtin_ctzll(y) + 64;
                }

                cout << pos[other] << " " << i << '\n';

                found = true;
                break;
            }

            if (rem < 64)
                seenLow |= (1ULL << rem);
            else
                seenHigh |= (1ULL << (rem - 64));

            pos[rem] = i;
        }

        if (!found) {
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}