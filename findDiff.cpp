class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    long long diff = INT_MAX ;
    sort(a.begin(),a.end());
    int i =0;
    int j = m-1;
        while(j<n){
            int diff2 = a[j]-a[i];
            if(diff2<diff){
                diff = diff2;
            }i++;
            j++;
        }
    return diff;
    
    }   
};
