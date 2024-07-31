#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minSoFar = prices[0];
        int ans = 0;

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - minSoFar;
            if (profit > ans) {
                ans = profit;
            }
            minSoFar = min(prices[i], minSoFar);
        }

        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Test Case 1:" << endl;
    cout << "Prices: [7, 1, 5, 3, 6, 4]" << endl;
    cout << "Max Profit: " << solution.maxProfit(prices1) << endl; // Output: 5

    cout << "\nTest Case 2:" << endl;
    cout << "Prices: [7, 6, 4, 3, 1]" << endl;
    cout << "Max Profit: " << solution.maxProfit(prices2) << endl; // Output: 0

    return 0;
}
