class Solution {
    public boolean isPalindrome(int x) {
        int rev=0;
        int temp=x; 
        //123 ,321
         while(x>0){
            int last=x%10;
            rev=rev*10+last;
            x/=10;
         }
         return temp==rev;
        
    }

        
    
}