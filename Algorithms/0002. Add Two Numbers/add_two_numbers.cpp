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
        ListNode *l3 = NULL, *current;
        int carry = 0;
    	while(l1 != NULL || l2 != NULL) {
		    int sum = 0;
            int x = l1 != NULL ? l1->val : 0;
            int y = l2 != NULL ? l2->val : 0;
            
            sum = x + y + carry;	
	        carry = sum / 10;
            sum = sum % 10;

            ListNode* temp = new ListNode(sum);
            
            if(l3 != NULL) {
                current->next = temp;
                current = current->next;
            } else {
                l3 = temp;
                current = l3;
            }
            
            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        }
        
        if(carry > 0 ) {
            ListNode* temp = new ListNode(carry);
            current->next = temp;
            current = current->next;
            carry = 0;
        }

        return l3;

    }
};