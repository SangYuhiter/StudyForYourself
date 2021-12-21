/*************************************************************************
 @File Name    : Solution1.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2021年12月22日 星期三 00时16分24秒
 @Description  : 
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode();
        ListNode* head = sum;
        int add_in = 0;
        while(l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr && l2 != nullptr){
                ListNode* temp = new ListNode((l1->val + l2->val + add_in) % 10);
                add_in = (l1->val + l2->val + add_in)/10;
                sum->next = temp;
                sum = sum->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 != nullptr && l2 == nullptr){
                ListNode* temp = new ListNode((l1->val+add_in)%10);
                add_in = (l1->val + add_in)/10;
                sum->next = temp;
                sum = sum->next;
                l1 = l1->next;
            }else if(l1 ==nullptr && l2 != nullptr){
                ListNode* temp = new ListNode((l2->val+add_in)%10);
                add_in = (l2->val+add_in)/10;
                sum->next = temp;
                sum = sum->next;
                l2 = l2->next;
            }
        }
        if(add_in > 0){
            ListNode* temp = new ListNode(add_in);
            sum->next = temp;
            sum = sum->next;
        }
        ListNode* result = head->next;
        delete head;
        return result;
    }
};
