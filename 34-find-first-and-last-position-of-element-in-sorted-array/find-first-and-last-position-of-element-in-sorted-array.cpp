class Solution {
public:
    int firstOccurance(vector<int>&nums, int s, int e, int target){

        int ans = -1;

        while(s <= e){
            int m = s + (e - s)/2;
            if(nums[m] == target){
                ans = m;
                e = m-1;
            }
            else if(nums[m] > target){
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        return ans;
    }
    int lastOccurance(vector<int>&nums, int s, int e, int target){

        int ans = -1;

        while(s <= e){
            int m = s + (e - s)/2;
            if(nums[m] == target){
                ans = m;
                s = m+1;
            }
            else if(nums[m] < target){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return ans;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int s = 0;
        int e = n-1;

        int firstOcc = firstOccurance(nums, s, e, target);
        ans.push_back(firstOcc);

        int lastOcc = lastOccurance(nums, s, e, target);
        ans.push_back(lastOcc);

        return ans;
    }
};