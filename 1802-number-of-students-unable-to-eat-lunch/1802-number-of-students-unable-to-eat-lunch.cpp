class Solution {
public:
    int countStudents(vector<int>& kid, vector<int>& lunch) {
        queue<int>q;
        int n=kid.size();
        for(int i=0;i<n;i++){
            q.push(kid[i]);
        }
        int i=0; //traverse kr ske sanwiches array ko
        int count=0;
        while(q.size()>0 && count!=q.size()){
            //student ki preference hai
            if(q.front()==lunch[i]){
                count=0;//imp
                q.pop();
                i++;
            }else{
                  q.push(q.front());
                  q.pop();
                  count++; //imp ,no infinte loop
            }
        }
        return q.size();

        
    }
};