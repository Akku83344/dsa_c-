#include <vector>
#include <string>
#include <algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n - 1];
        string ans = "";
        for (int i = 0; i < first.size(); i++) {
            if (first[i] == last[i]) {
                ans += first[i];
            } else {
                break;
            }
        }
        return ans;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<string> words = {"flower", "flow", "flight"};
    cout << "Longest common prefix: " << solution.longestCommonPrefix(words) << endl;
    return 0;
}
