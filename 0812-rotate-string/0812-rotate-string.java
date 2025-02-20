class Solution {
    // public String rotate(String s,int k){
    //     int n=s.length();
    //     k=k%n; //hanle rotation jo n se badi ho
    //     return s.substring(k) + s.substring(0,k);
        
    // }
    public boolean rotateString(String s, String goal) {
        // if(s.length()!=goal.length()) return false;
        // //sari possible rotations 
        // for(int k=0;k<s.length();k++){
        //     if(rotate(s,k).equals(goal)){
        //         return true;
        //     }
        // }
        // return false;

//optimized
        if(s.length()!=goal.length()) return false;
        return (s+s).contains(goal);

    }
}