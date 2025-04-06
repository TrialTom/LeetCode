#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 较大分组的位置

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {

        vector<vector<int>> ans;
        vector<int>team(2);
        
        // 判断s大小是否复合要求
        if(s.size() <= 2){
            return ans;
        }

        // 遍历字符串
        int pre = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[pre] != s[i]){
                if(i - pre > 2){
                    team[0] = pre;
                    team[1] = i - 1;
                    ans.push_back(team);
                }
                pre = i;
            }
            // 最后一个字符的处理
            if(i == s.size()-1 && (i - pre) >= 2){
                team[0] = pre;
                team[1] = i;
                ans.push_back(team);
            }
        }
        return ans;
    }
};

int main()
{
    cout << "Hello world" << endl;
    return 0;
}

