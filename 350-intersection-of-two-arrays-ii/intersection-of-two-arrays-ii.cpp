class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        list<int> l;
        vector<int>ans;
        for(int num : nums1){
            l.push_back(num);
        }

        for(int i=0; i<nums2.size(); i++){
            int num =  nums2[i];
            auto it = find(l.begin(), l.end(), num);
            if(it != l.end()){
                ans.push_back(num);
                l.erase(it);
            }
        }

        return ans;
    }
};