
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int groups = 1, mid = 0;

        for (int i = 0; i < n; i++) {
            if (i > 0 && s[i] != s[i - 1])
                groups++;

            if (groups == 2)
                mid++;
        }

        if (groups <= 2 || (groups == 3 && 2 * mid >= n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
