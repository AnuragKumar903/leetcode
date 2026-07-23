class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        int i=0, j=nums.size();

        while(i<j){
            if(nums[i] == 1){
                count++;
            }
            else{
                ans.push_back(count);
                count = 0;
            }
            i++;
            
        }
        ans.push_back(count); // for last 1

        // finding max in ans array
        sort(ans.begin(), ans.end());
        
        return ans[ans.size() - 1];
    }
};