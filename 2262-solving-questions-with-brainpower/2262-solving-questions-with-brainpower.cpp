// class Solution {
// public:
//     long long mostPoints(vector<vector<int>>& q) {
//        int n=q.size();
//        if(n==1) return q[0][0];
//        vector<long long> t(20001,0);
//        for(int i=n-1;i>=0;i--){
//         t[i]=max(q[i][0]+t[i+q[i][1]+1],t[i+1]);
//        }
//        return t[0];
        
//     }
// };

class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
       int n = q.size();
       if (n == 1) return q[0][0];
       
       vector<long long> t(n + 1, 0); // Fix: Use n+1 instead of 20001 to avoid unnecessary memory usage
       
       for (int i = n - 1; i >= 0; i--) {
           int next = i + q[i][1] + 1;
           t[i] = max(q[i][0] + (next < n ? t[next] : 0), t[i + 1]); // Fix: Prevent out-of-bounds access
       }
       
       return t[0];
    }
};
