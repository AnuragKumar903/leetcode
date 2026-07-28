class Solution {
public:
    int sSlope(vector<int>& nums, int s, int e, int target){
        int ans = -1;
        while(s <= e){
            int m = s + (e-s)/2;
            if(nums[m] == target){
                ans = m;
                return ans;
            }
            else if(nums[m] < target) s = m+1;
            else e = m-1;
        }
        return ans;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;

        // arr Rotated or not
        if(nums[s] < nums[e]){
            return sSlope(nums, s, e, target);
        }

        //finding pivot
        while(s < e){
           int m = s + (e-s)/2;
           if(nums[m] >= nums[0])  s = m+1; 
           else e = m; 
        }
        int pivot = s;
        s = 0;
        e = n-1;
        int ans = 0;

        if(target > nums[e]){//left slope
            ans = sSlope(nums, s, pivot-1, target);
        }
        else ans = sSlope(nums, pivot, e, target);

        return ans;
    }
};