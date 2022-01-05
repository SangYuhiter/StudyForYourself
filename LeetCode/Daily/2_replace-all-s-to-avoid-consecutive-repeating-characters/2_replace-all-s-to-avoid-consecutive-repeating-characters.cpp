/*************************************************************************
 @File Name    : 2_replace-all-s-to-avoid-consecutive-repeating-characters.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2022年01月06日 星期四 00时24分50秒
 @Description  : 
 ************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string modifyString(string s) {
	for(int i = 0;i<s.size();i++){
		vector<char> chs = {'a','b','c','d','e','f','g','h','i','j','k',
			'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		if (s[i] != '?'){
			continue;
		}
		else{
			//delete forward ch
			if(i != 0)
			{
                auto iter = find(chs.begin(),chs.end(),s[i-1]);
                if(iter!=chs.end())
                    chs.erase(iter);
            }
            if((s[i+1]!='?') && (i != s.size()-1))
            {
                auto iter = find(chs.begin(),chs.end(),s[i+1]);
                if(iter!=chs.end())
                    chs.erase(iter);
            }
            s[i] = chs[0];
		}
	}
	return s;
}

int main(){
	string s = "j?qg??b";
    string result = modifyString(s);
    cout<<result<<endl;
    return 0;
}
