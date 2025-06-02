class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;
        for(int i=0;i<s.length();i++){
            char ch1=s[i];
            char ch2=t[i];

            if(mpp1.count(ch1)){
            if(mpp1[ch1]!=ch2) return false;
            }else mpp1[ch1]=ch2;

            if(mpp2.count(ch2)){
                if(mpp2[ch2]!=ch1) return false;
            }else mpp2[ch2]=ch1;
        }
        return true;
        
    }
};