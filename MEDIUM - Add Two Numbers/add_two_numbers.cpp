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
        
        int carry = 0;
        int number1 = 0;
        int number2 = 0;
        int sum = 0;
        int value = 0;
    

        ListNode solution;
        ListNode* current = &solution;

        while(l1 != nullptr || l2 != nullptr || carry != 0){
            

            if(l1 != nullptr){
                number1 = l1->val;
                l1 = l1->next;
            }else{
                number1 =  0;
                l1 = nullptr;
            }

            if(l2 != nullptr){
                number2 = l2->val;
                l2 = l2->next;
            }else{
                number2 =  0;
                l2 = nullptr;
            }

            sum = number1 + number2 + carry;
            value = sum % 10;
            carry = sum/10;

            current->next = new ListNode(value);
            current = current->next;

 
        }

        return solution.next;
    }
};