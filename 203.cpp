/*
    题意：给一个链表以及一个val值要去除链表中与val值相等的节点
    解法：给链表加一个头结点因为可能开始第一个节点值就与val值相等
    方便操作，然后循环删除就好
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *Head = (ListNode *)malloc(sizeof(ListNode));
        Head->next = head;
        ListNode *p = Head;
        while(p!=NULL&&p->next!=NULL){
            ListNode *temp = p->next;
            while(temp!=NULL&&temp->val == val){
                temp = temp->next;
            }
            p->next = temp;
            p = p->next;
        }
        return Head->next;
    }
};