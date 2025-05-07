class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
            if(mpp[i]>1) return true;
        }
       
        return false;
    }
};