class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;  // Edge case, should never happen as per constraints.

        long long max_value = 0;
        long long max_prefix = nums[0];  // Maximum nums[i] before j
        long long max_left_diff = LLONG_MIN; // Maximum (nums[i] - nums[j])
        
        // Iterate through the array to track values dynamically
        for (int j = 1; j < n - 1; j++) {
            max_left_diff = max(max_left_diff, max_prefix - nums[j]);  // Update max (nums[i] - nums[j])
            max_value = max(max_value, max_left_diff * nums[j + 1]);   // Compute the triplet value
            max_prefix = max(max_prefix, (long long)nums[j]);          // Update max_prefix for next iteration
        }

        return max_value > 0 ? max_value : 0; // If all values are negative, return 0
    }
};