#include"include.hpp"
std::vector<TestCase> testCases = {
       TestCase({2, 7, 11, 15}, 9, {0, 1}), // 测试用例1
       TestCase({3, 2, 4}, 6, {1, 2}),      // 测试用例2
       TestCase({3, 3}, 6, {0, 1})          // 测试用例3
};

std::vector<BaseSolution*> solutions = {
    new way1::Solution(),
    new way2::Solution(),
    new way3::Solution()
};

const char* methods[] = {
       "暴力枚举",   // Brute-force enumeration
       "哈希表",     // Hash table
       "双指针"      // Two pointers
};

void print() {
    for (const auto& test : testCases) {
        std::cout << "输入数组: ";
        for (int num : test.nums) {
            std::cout << num << " ";
        }
        std::cout << "| 目标值: " << test.target << " | " << "预期数组 ";
        for (int num : test.expected) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

void run() {
    int count1 = 0;
    int count2 = -1;
    for (const auto& test : testCases) {  // testCases 是 const
        count1++;
        for (BaseSolution* solution : solutions) {
            count2++;
            std::vector<int> result = solution->twoSum(const_cast<std::vector<int>&>(test.nums), test.target);
            std::cout << "用例" << count1 << " " << "方法 " << methods[count2];
            std::cout << " 结果: ";
            for (int num : result) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
        count2 = -1;
    }
}