#include"include.hpp"
std::vector<TestCase> testCases = {
       TestCase({2, 7, 11, 15}, 9, {0, 1}), // ��������1
       TestCase({3, 2, 4}, 6, {1, 2}),      // ��������2
       TestCase({3, 3}, 6, {0, 1})          // ��������3
};

std::vector<BaseSolution*> solutions = {
    new way1::Solution(),
    new way2::Solution(),
    new way3::Solution()
};

const char* methods[] = {
       "����ö��",   // Brute-force enumeration
       "��ϣ��",     // Hash table
       "˫ָ��"      // Two pointers
};

void print() {
    for (const auto& test : testCases) {
        std::cout << "��������: ";
        for (int num : test.nums) {
            std::cout << num << " ";
        }
        std::cout << "| Ŀ��ֵ: " << test.target << " | " << "Ԥ������ ";
        for (int num : test.expected) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

void run() {
    int count1 = 0;
    int count2 = -1;
    for (const auto& test : testCases) {  // testCases �� const
        count1++;
        for (BaseSolution* solution : solutions) {
            count2++;
            std::vector<int> result = solution->twoSum(const_cast<std::vector<int>&>(test.nums), test.target);
            std::cout << "����" << count1 << " " << "���� " << methods[count2];
            std::cout << " ���: ";
            for (int num : result) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
        count2 = -1;
    }
}