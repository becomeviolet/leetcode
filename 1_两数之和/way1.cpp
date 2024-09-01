#include"include.hpp"
// ��ϣ��
namespace way1 {
    std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)  {
        std::unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return { num_map[complement], i };
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
}
