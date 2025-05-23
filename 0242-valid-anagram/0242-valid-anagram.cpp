class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>smap;
        unordered_map<char,int>tmap;

        for(auto ch:s){
            smap[ch]++;
        }
        for(auto ch:t){
            tmap[ch]++;
        }

        return smap==tmap;
    }
};