#include"include.hpp"


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);  // �ڱ��ڵ㣬���ڴ�������ͷ
        ListNode* current = dummyHead;  // ��ǰ�����ڵ�
        int carry = 0;  // ��λ

        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;  // ��ȡl1��ǰ�ڵ�ֵ
            int y = (l2 != nullptr) ? l2->val : 0;  // ��ȡl2��ǰ�ڵ�ֵ
            int sum = carry + x + y;  // ���㵱ǰλ�ĺ�

            carry = sum / 10;  // ���½�λ
            current->next = new ListNode(sum % 10);  // �����½ڵ�
            current = current->next;  // �ƶ�����һ���ڵ�

            if (l1 != nullptr) l1 = l1->next;  // �ƶ���l1����һ���ڵ�
            if (l2 != nullptr) l2 = l2->next;  // �ƶ���l2����һ���ڵ�
        }

        if (carry > 0) {  // �������ܵĽ�λ
            current->next = new ListNode(carry);
        }

        return dummyHead->next;  // ���ؽ������
    }
};