#ifndef TESTCASE_H  // 头文件保护
#define TESTCASE_H


class TestCase {
public:
    std::vector<int> nums;  // 存储输入的数字数组
    int target;             // 存储目标值
    std::vector<int> expected;           // 预期输出（结果）

    // 构造函数声明
    TestCase(std::vector<int> n, int t, std::vector<int> e);
};

#endif // TESTCASE_H
