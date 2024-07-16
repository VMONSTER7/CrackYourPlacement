class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> res;
        for(int i = 0 ; i < nums.size()  ; i++){
            res[nums[i]]++;
        }
        for(auto&it:res){
            if(it.second>=2){
                return it.first;
            }
        }
        return 0 ;
    }
};
