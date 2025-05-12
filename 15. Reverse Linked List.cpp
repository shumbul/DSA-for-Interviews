// 206. Reverse Linked List - https://leetcode.com/problems/reverse-linked-list

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
    ListNode* reverseList(ListNode* head) {
        // iterative solution
        if(!head) return head;
        ListNode* prev=nullptr, * temp;
        while(head){
            temp = head->next;
            head->next = prev;
            prev=head;
            head=temp;
        }
        return prev;
        // O(n) time, O(1) space
    }
};
