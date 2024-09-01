#include"include.hpp"


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);  // 哨兵节点，便于处理链表头
        ListNode* current = dummyHead;  // 当前操作节点
        int carry = 0;  // 进位

        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;  // 获取l1当前节点值
            int y = (l2 != nullptr) ? l2->val : 0;  // 获取l2当前节点值
            int sum = carry + x + y;  // 计算当前位的和

            carry = sum / 10;  // 更新进位
            current->next = new ListNode(sum % 10);  // 创建新节点
            current = current->next;  // 移动到下一个节点

            if (l1 != nullptr) l1 = l1->next;  // 移动到l1的下一个节点
            if (l2 != nullptr) l2 = l2->next;  // 移动到l2的下一个节点
        }

        if (carry > 0) {  // 最后处理可能的进位
            current->next = new ListNode(carry);
        }

        return dummyHead->next;  // 返回结果链表
    }
};