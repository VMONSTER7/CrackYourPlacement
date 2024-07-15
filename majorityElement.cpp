class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1;
        int ans;
        for(int i = 0; i < nums.size(); i++)
        {
            m1[nums[i]]++;
        }
        for(const auto&it: m1){
            if(it.second>(nums.size())/2)
            {
            ans = it.first;
            }
        }
        return ans;
    }
};
