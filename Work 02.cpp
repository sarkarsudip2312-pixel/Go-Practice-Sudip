#include <bits/stdc++.h>
using namespace std;

bool isCentered(const string &t) {
    int m = t.length();
    if (m % 2 == 0) return true; 
    

    char midChar = t[m / 2];
    

    int count = 0;
    for (char c : t) {
        if (c == midChar) {
            count++;
        }
    }
    

    return count > m / 2;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;


    for (int i = 0; i < n; ++i) {
        for (int len = 1; i + len <= n; len += 2) {
            string sub = s.substr(i, len);
            if (!isCentered(sub)) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}