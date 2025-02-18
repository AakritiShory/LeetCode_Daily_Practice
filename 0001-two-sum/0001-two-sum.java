class Solution {
    public int[] twoSum(int[] nums, int target) {
        // int ans[]={-1};
        // int n=nums.length;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[j]==target-nums[i]){
        //             return ans=new int[]{i,j};
        //         }
        //     }
        // }
        // return ans;

        //optimized
        int n=nums.length;
        int[] ans={-1};
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<n;i++){
            int j=target-nums[i];
            if(mp.containsKey(j)){
                ans=new int[]{i,mp.get(j)};
                return ans;
            }
            mp.put(nums[i],i);

        }
        return ans;
        
    }
}