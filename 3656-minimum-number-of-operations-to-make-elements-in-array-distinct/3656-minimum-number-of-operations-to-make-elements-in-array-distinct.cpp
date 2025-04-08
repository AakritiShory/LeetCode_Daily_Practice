class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.count(nums[i])){ //if 0 toh this condition false ,no duplicate
                return ceil((i+1)/3.0); //divison to float taki rounds pta lage
            }
            s.insert(nums[i]); //simply add it to set.
        }
        return 0;
    }
};