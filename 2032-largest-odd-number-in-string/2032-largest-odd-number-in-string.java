class Solution {
    public String largestOddNumber(String num) {
        for(int i=num.length()-1;i>=0;i--){
            //char to int
            int digit=Character.getNumericValue(num.charAt(i));
            //jab largest odd check krna hai toh last number se he check hoga
            if(digit%2!=0){
                return num.substring(0,i+1);
            }

        }
        return "";
    }
}