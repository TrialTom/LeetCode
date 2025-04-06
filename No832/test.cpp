#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 反转图像

class Solution {
private:
    void reverseNumber(vector<int> & nums){
        int len = nums.size();
        int left = 0;
        int right = len-1;
        while(left < right){
            if(nums[left] == nums[right]){
                nums[left] ^=1;
                nums[right] ^= 1;
            }
            left++;
            right--;
        }
        if(left == right){
            nums[left] ^= 1;
        }
    }
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        if(image.size() <= 0){
            return image;
        }
        int row = image.size();
        for(int i = 0; i < row; i++){
            reverseNumber(image[i]);
        }
        return image;
    }
};

int main()
{
    cout << "Hello world" << endl;
    return 0;
}

