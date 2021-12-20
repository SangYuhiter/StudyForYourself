/*************************************************************************
 @File Name    : Solution1.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2021年12月20日 星期一 23时52分58秒
 @Description  : twoSum force solution
 ************************************************************************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(size_t i = 0;i<nums.size();i++)
        {
            for(size_t j = i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
