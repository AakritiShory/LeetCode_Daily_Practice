class Solution {
    public int[] twoSum(int[] nums, int target) {
        int ans[]={-1};
        int n=nums.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]==target-nums[i]){
                    return ans=new int[]{i,j};
                }
            }
        }
        return ans;
        
    }
}