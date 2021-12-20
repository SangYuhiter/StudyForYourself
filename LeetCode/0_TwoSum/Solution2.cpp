/*************************************************************************
 @File Name    : Solution2.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2021年12月21日 星期二 00时17分08秒
 @Description  : map solution
 ************************************************************************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nums_map;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums_map.count(target-nums[i])>0)
            {
                return vector<int>{i,nums_map[target-nums[i]]};
            }
            nums_map[nums[i]] = i;
        }
        return vector<int>{2,-1};
    }
};
