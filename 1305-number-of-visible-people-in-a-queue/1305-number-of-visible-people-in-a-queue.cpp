class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int> ans(n,0);//vector inialized with 0
        stack<int> st;
        //last se dalna shuru aur last vala kisi ko dekh ni skta
        st.push(heights[n-1]);
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int count=0;
            //pop with count
            while(st.size()>0 && heights[i]>st.top()){
                st.pop();
                count++;
            }
            if(st.size()!=0) count++; //imp
            ans[i]=count;
            //push
            st.push(heights[i]);
        }
        return ans;
        
    }
};