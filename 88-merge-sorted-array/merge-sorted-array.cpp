class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int i=0, j=0;
        for(i=0;i<m;i++)
        {
            result.push_back(nums1[i]);
        }

        for(j=0;j<n;j++)
        {
            result.push_back(nums2[j]);
        }
        nums1=result;
        sort(nums1.begin(), nums1.end());
        
    }
};