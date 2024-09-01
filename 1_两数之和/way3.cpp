#include"include.hpp"
//双指针
namespace way3 {
    std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
        std::vector<std::pair<int, int>> numWithIndex; // 用于存储数值及其原始索引
        for (int i = 0; i < nums.size(); ++i) {
            numWithIndex.push_back({ nums[i], i });
        }

        // 对数组进行排序
        sort(numWithIndex.begin(), numWithIndex.end());

        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = numWithIndex[left].first + numWithIndex[right].first;
            if (sum == target) {
                return { numWithIndex[left].second, numWithIndex[right].second };
            }
            else if (sum < target) {
                left++;  // 如果和小于目标值，移动左指针
            }
            else {
                right--; // 如果和大于目标值，移动右指针
            }
        }
        return {};
    }
}