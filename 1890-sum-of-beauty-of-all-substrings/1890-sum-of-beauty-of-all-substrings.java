class Solution {
    public int beautySum(String s) {
        int n=s.length();
        int totalBeauty=0;

        //all substrings
        for(int i=0;i<n;i++){
            int[] freq=new int[26];//freq arr of character

            for(int j=i;j<n;j++){
                freq[s.charAt(j)-'a']++; //cj ki free increase


                int minFreq=Integer.MAX_VALUE;
                int maxFreq=Integer.MIN_VALUE;
                for(int f:freq){
                    if(f>0){
                        minFreq=Math.min(minFreq,f);
                        maxFreq=Math.max(maxFreq,f);
                    }
                }
                totalBeauty+=(maxFreq-minFreq);
            }
        }
        return totalBeauty;
    }
}