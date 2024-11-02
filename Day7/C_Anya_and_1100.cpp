#include <bits/stdc++.h>
using namespace std;

void processTestCase() {
    string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
    set<int> positions;
    for (int i = 0; i <= n - 4; ++i) {
        if (s.substr(i, 4) == "1100") {
            positions.insert(i);
        }
    }
    while (q--) {
        int i;
        char v;
        cin >> i >> v;
        --i;  
        for (int j = max(0, i - 3); j <= min(n - 4, i); ++j) {
            if (s.substr(j, 4) == "1100") {
                positions.erase(j);
            }
        }
        s[i] = v;
        for (int j = max(0, i - 3); j <= min(n - 4, i); ++j) {
            if (s.substr(j, 4) == "1100") {
                positions.insert(j);
            }
        }
        if (!positions.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        processTestCase();
    }

    return 0;
}
