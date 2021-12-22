/*************************************************************************
 @File Name    : Solution1.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2021年12月23日 星期四 00时09分41秒
 @Description  : 
 ************************************************************************/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxsubstring = 0;
        if(s == "")
            return maxsubstring;
        for(size_t i = 0;i < s.size();i++){
            int substringlength = 1;
            int j = i+1;
            vector<char> substring = {s[i]};
            while(j<s.size()){
                auto iter = std::find(substring.begin(),substring.end(),s[j]);
                if(iter == substring.end()){
                    substringlength++;
                    substring.push_back(s[j]);
                    j++;
                }else{
                    break;
                }
            }
            substring.clear();
            maxsubstring = maxsubstring>substringlength?maxsubstring:substringlength;
        }
        return maxsubstring;
    }
};
