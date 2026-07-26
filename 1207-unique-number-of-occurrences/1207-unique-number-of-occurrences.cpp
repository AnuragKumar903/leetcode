class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       
        int ans = 0;
        unordered_map<int, int> freq;
        for(int x:arr){
            freq[x]++;
        }
        unordered_set<int> seen;
        for(auto it : freq){
            if(seen.find(it.second) != seen.end()){
                return false;
            }else   seen.insert(it.second);
        }
        return true;
    }
};