// Merge Two Sorted Lists - https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* temp = head;
        while(list1 || list2) {
            if(!list1) {
                temp->next = list2;
                break;
            }
            if(!list2) {
                temp->next = list1;
                break;
            }
            
            if(list1->val<=list2->val) {
                temp->next = list1;
                temp=temp->next;
                list1 = list1 -> next;
            }
            else {
                temp->next = list2;
                temp=temp->next;
                list2 = list2 -> next;
            }
        }
        return head->next;
        // O(n+m) time, O(1) space
    }
};
