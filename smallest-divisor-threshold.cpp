class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=0;
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            end=max(end,nums[i]);
        }

        while(start<=end){
            int  mid=start+(end-start)/2;
            long long sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;

    }
};
