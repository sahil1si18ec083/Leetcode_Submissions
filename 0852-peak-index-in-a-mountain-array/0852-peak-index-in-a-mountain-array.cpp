class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 0;
        }
        
        if (nums[0]>nums[1]){
            return 0;
        }
        if (nums[n-1]>nums[n-2]){
            return n-1;
        }
        int low=1;
        int high = n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if((mid==0 || nums[mid]>nums[mid-1]) && (mid==n-1 || nums[mid]>nums[mid+1])){
                return mid;
            }
            else if ((mid==0 || nums[mid]>nums[mid-1])){
                low= mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
        
        
    }
};