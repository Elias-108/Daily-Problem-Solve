#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, vector<int>> brand_costs;
        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            brand_costs[b].push_back(c);
        }
        vector<long long> brand_sums;
        for (auto& entry : brand_costs) {
            vector<int>& costs = entry.second;
            sort(costs.rbegin(), costs.rend()); 
            long long sum = 0;
            for (int cost : costs) {
                sum += cost;
            }
            brand_sums.push_back(sum);
        }

        
        sort(brand_sums.rbegin(), brand_sums.rend());

        long long max_revenue = 0;
        for (int i = 0; i < min(n, (int)brand_sums.size()); i++) {
            max_revenue += brand_sums[i];
        }

        cout << max_revenue << "\n";
    }

    return 0;
}
