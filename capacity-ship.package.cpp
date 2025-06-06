class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        int end=0;
        int ans=0;
        for(int i=0;i<weights.size();i++){
            start=max(start,weights[i]);
            end+=weights[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int day=1;
            int load=0;
            for(int i=0;i<weights.size();i++){
                if(load+weights[i]>mid){
                    day=day+1;
                    load=weights[i];
                }
                else{
                    load+=weights[i];
                }
            }
            if(day>days){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
           
        } 
        return ans;

    }
};
