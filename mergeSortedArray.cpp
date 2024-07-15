class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = 0 ; 
        vector<int> res;
        while(m>0&&k<m){
            res.push_back(nums1[k]);
            k++;
        }
        nums1.clear();
        int i = 0 , j = 0 ;

        while(i<m && j<n){
            if(res[i]<nums2[j]){
                nums1.push_back(res[i]);
                i++;
            }
            else{
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            nums1.push_back(res[i]);
            i++;
        }
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
        }
    }
};
