class Solution {
    public boolean isPalindrome(int x) {

        int temp,r;
        double rev=0;
        temp=x;
        while(x>0){
            r=x%10;
            rev=(rev*10)+r;
            x=x/10;
        }
        return temp==rev;
    }

        
    
}