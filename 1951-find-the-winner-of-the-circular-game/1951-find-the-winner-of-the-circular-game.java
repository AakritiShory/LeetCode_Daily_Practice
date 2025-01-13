class Solution {
    int findWinnerIdx(int n,int k){
        if(n==1){
            return 0;
        }
        int idx=findWinnerIdx(n-1,k);
        idx=(idx+k)%n;//to find original index in original arr
        return idx;
       
    }
    public int findTheWinner(int n, int k) {
        int result_idx=findWinnerIdx(n,k);
        return result_idx+1;


         
    }
}