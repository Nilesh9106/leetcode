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
        
         ListNode *head = NULL;
        
        ListNode *temp = NULL;
        
        int a = 0;
        
        while (l1 != NULL || l2 != NULL) {
            
            int sum = a;
            
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            int ans=sum % 10;
            a = sum / 10;
            ListNode *node = new ListNode(ans);
            
            
            
            if (temp == NULL) {
                head = node;
                temp = node;
            }
            else {
                temp->next = node;
                temp = node;
            }
        }
        
        if (a > 0) {
            temp->next = new ListNode(a);
        }
        return head;
    }
};