class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> s;
        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!s.empty() && nums[i % n] >= nums[s.top()]) {
                s.pop();
            }
            if (i < n) { 
                ans[i] = s.empty() ? -1 : nums[s.top()];
            }
            s.push(i % n);
        }
        return ans;
    }
};
