class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        vector<int> result;
        int temp=nums[0];
        result.push_back(temp);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=temp)
            {
                temp=nums[i];
                result.push_back(nums[i]);
                count++;
            }
        }
        nums=result;
        return count;
    }
};