class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i = 0 ; i < nums.size() ; i++){
            map[nums[i]]++;
        }
        nums.clear();
        for(const auto&it : map){
            nums.push_back(it.first);
        }
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};
