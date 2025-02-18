class Solution {
    static HashMap<Character,Integer> freq(String s){
        HashMap<Character,Integer> mpp=new HashMap<>();
        for(int i=0;i<s.length();i++){
            Character ch=s.charAt(i);
            if(!mpp.containsKey(ch)){
                mpp.put(ch,1);
            }else{
                mpp.put(ch,mpp.get(ch)+1);
            }
        }
        return mpp;
    }
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())return false;
        HashMap<Character,Integer> mp1=freq(s);
        HashMap<Character,Integer> mp2=freq(t);
        return mp1.equals(mp2);
        
    }
}