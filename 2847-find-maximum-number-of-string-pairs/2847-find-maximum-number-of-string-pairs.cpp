class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        // int n=words.size();
        // int count=0;
        // for(int i=0;i<n-1;i++){
        //     string rev=words[i];
        //     reverse(rev.begin(),rev.end());
        //     for(int j=i+1;j<n;j++){
        //         if(rev==words[j]) count++;
        //     }
        // }
        // return count;

        // int n=words.size();
        // int count=0;
        // unordered_set<string> s;
        // for(int i=0;i<n;i++){
        //     s.insert(words[i]);
        // }
        // for(int i=0;i<n;i++){   //on
        //     string rev=words[i];
        //     reverse(rev.begin(),rev.end());
        //     if(words[i]==rev) continue;
        //     if(s.find(rev)!=s.end()){ //o1
        //         count++;
        //         s.erase(words[i]);
        //     }
        // }
        // return count;

        int n=words.size();
        int count=0;
        unordered_set<string> s;
        for(int i=0;i<n;i++){
            string rev=words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)!=s.end()) count++;
            else s.insert(words[i]);
        }
        return count;
    }
};