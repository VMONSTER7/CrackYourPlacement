class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         unordered_map<int,int> res;
        for(int i = 0 ; i < nums.size()  ; i++){
            res[nums[i]]++;
        }
        nums.clear();
        for(auto&it:res){
            if(it.second>=2){
                nums.push_back(it.first);
            }
        }
        return nums;
    }
};
