#ifndef TESTCASE_H  // ͷ�ļ�����
#define TESTCASE_H


class TestCase {
public:
    std::vector<int> nums;  // �洢�������������
    int target;             // �洢Ŀ��ֵ
    std::vector<int> expected;           // Ԥ������������

    // ���캯������
    TestCase(std::vector<int> n, int t, std::vector<int> e);
};

#endif // TESTCASE_H
