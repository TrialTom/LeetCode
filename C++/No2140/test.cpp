#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
// solution Question with brainpower

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        if(questions.size() == 1){
            return questions[0][0];
        }
        int n = questions.size();
        vector<long long> dp(n+1);
        dp[n] = 0;
        for(int i = n-1; i >= 0; i--){
            dp[i] = max(dp[i+1],questions[i][0]+dp[min(n,i+questions[i][1]+1)]);
        }
        return dp[0];
    }
};

int main()
{
    Solution solution = Solution();
    vector<vector<int>>nums{{3,2},{4,3},{4,4},{2,5}};
    cout<< solution.mostPoints(nums)<<endl;

    return 0;
}

