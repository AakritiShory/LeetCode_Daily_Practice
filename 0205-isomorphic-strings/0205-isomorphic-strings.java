class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length()!=t.length())return false;
        HashMap<Character,Character> mp=new HashMap<>();
        //to track mapped values
        HashMap<Character,Boolean> used=new HashMap<>();
        for(int i=0;i<s.length();i++){
            Character chS=s.charAt(i);
            Character chT=t.charAt(i);
//agr chS ko already map kr rakha hai and we r checking if it matches expected character
            if(mp.containsKey(chS)){
                if(mp.get(chS)!=chT){
                    return false;
                }
            }else{
                //agr chT already use ho gya koi aur mappinh mei toh false return
                if(used.containsKey(chT))return false;
                //other wise new mapping banao

                mp.put(chS,chT);
                used.put(chT,true);
            }
        }
        return true;

    }
}