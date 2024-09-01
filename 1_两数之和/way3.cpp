#include"include.hpp"
//˫ָ��
namespace way3 {
    std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
        std::vector<std::pair<int, int>> numWithIndex; // ���ڴ洢��ֵ����ԭʼ����
        for (int i = 0; i < nums.size(); ++i) {
            numWithIndex.push_back({ nums[i], i });
        }

        // �������������
        sort(numWithIndex.begin(), numWithIndex.end());

        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = numWithIndex[left].first + numWithIndex[right].first;
            if (sum == target) {
                return { numWithIndex[left].second, numWithIndex[right].second };
            }
            else if (sum < target) {
                left++;  // �����С��Ŀ��ֵ���ƶ���ָ��
            }
            else {
                right--; // ����ʹ���Ŀ��ֵ���ƶ���ָ��
            }
        }
        return {};
    }
}