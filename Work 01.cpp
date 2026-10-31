#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long a, b;
    if (!(cin >> n >> a >> b)) return;

    vector<long long> x(n), y(n), w(n);
    for (int i = 0; i < n; ++i) cin >> x[i];
    for (int i = 0; i < n; ++i) cin >> y[i];
    for (int i = 0; i < n; ++i) cin >> w[i];


    map<pair<long long, long long>, long long> shift_weights;
    long long max_val = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            long long kx = x[j] - a * x[i] + b * y[i];
            long long ky = y[j] - b * x[i] - a * y[i];
            
            shift_weights[{kx, ky}] += w[i];
            max_val = max(max_val, shift_weights[{kx, ky}]);
        }
    }

    cout << max_val << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
