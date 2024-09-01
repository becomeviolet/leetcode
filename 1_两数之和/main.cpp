#include"include.hpp"

using namespace way1;
void printVector(const std::vector<int>& vec, int target);


int main() {
    //测试用例1 预期9
    std::vector<int> nums1 = { 2, 7, 11, 15 };
    int target1 = 9;
    //测试用例2 预期6
    std::vector<int> nums2 = { 3, 2, 4 };
    int target2 = 6;
    //测试用例3 预期6
    std::vector<int> nums3 = { 3, 3 };
    int target3 = 6;
    
    way1::Solution S1 = way1::Solution();
    way2::Solution S2 = way2::Solution();
    way3::Solution S3 = way3::Solution();

    std::vector<int> result1_1 = S1.twoSum(nums1, target1);
    std::vector<int> result1_2 = S1.twoSum(nums2, target2);
    std::vector<int> result1_3 = S1.twoSum(nums3, target3);

    std::vector<int> result2_1 = S2.twoSum(nums1, target1);
    std::vector<int> result2_2 = S2.twoSum(nums2, target2);
    std::vector<int> result2_3 = S2.twoSum(nums3, target3);

    std::vector<int> result3_1 = S3.twoSum(nums1, target1);
    std::vector<int> result3_2 = S3.twoSum(nums2, target2);
    std::vector<int> result3_3 = S3.twoSum(nums3, target3);

    printVector(result1_1, target1);
    printVector(result1_2, target2);
    printVector(result1_3, target3);

    printVector(result2_1, target1);
    printVector(result2_2, target2);
    printVector(result2_3, target3);

    printVector(result3_1, target1);
    printVector(result3_2, target2);
    printVector(result3_3, target3);
    return 0;
}
void printVector(const std::vector<int>& vec, int target) {
    std::cout << "目标值" << target << " ";
    for (int index : vec) {
        std::cout << "目标索引" << index << " ";
    }
    std::cout << std::endl;
}