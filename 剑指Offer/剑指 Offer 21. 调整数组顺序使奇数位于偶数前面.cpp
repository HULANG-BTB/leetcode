class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        for (int i = 0; i < even.size(); i++)
        {
            odd.push_back(even[i]);
        }
        return odd;
    }
};