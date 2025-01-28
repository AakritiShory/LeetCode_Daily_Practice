class Solution {
    public int singleNumber(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int count=0;
            int store=nums[i];
            for(int j=0;j<nums.length;j++){
                if(nums[j]==store){
                    count++;
                }
            }
            if(count==1){
                return store;
            }
        }
        return -1;
        
    }
}