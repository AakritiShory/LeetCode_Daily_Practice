class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<int>st;
        for(auto c:s){
            if(!st.empty()&&st.top()==c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        string res="";
        while(!st.empty()){
            char ele=st.top();
            st.pop();
            res+=ele;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};