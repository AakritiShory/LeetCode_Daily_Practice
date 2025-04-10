class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        
        int n=arr.size();
        //next smaller index
        vector<int> nsi(n);
        stack<int>st;
        //last element agr mera 5 hai toh use 6 fill krdo
        //na ki -1
        nsi[n-1]=n;
        //index push
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            //pop
            while(st.size()>0 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            //ans
            if(st.size()==0) nsi[i]=n;
            else nsi[i]=st.top();
            //push
            st.push(i);
        }

        //previous smaller index;
        vector<int> psi(n);
        stack<int> gt;
         psi[0]=-1;
        //index push
        gt.push(0);
        for(int i=1;i<n;i++){
            //pop
            while(gt.size()>0 && arr[gt.top()]>=arr[i]){
                gt.pop();
            }
            //ans ,change kiya hai khali hone pr -1
            if(gt.size()==0) psi[i]=-1;
            else psi[i]=gt.top();
            //push
            gt.push(i);
        }

        int maxArea=0;
        for(int i=0;i<n;i++){
            int height=arr[i];
            int breadth=nsi[i]-psi[i]-1;
            int area=height*breadth;
            maxArea=max(maxArea,area);
        }
        return maxArea;


        
    }
};