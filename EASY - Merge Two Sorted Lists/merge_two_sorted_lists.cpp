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

        //First node creation and use of last to iterate through the list
        ListNode solution;
        ListNode* last = &solution;

        //Stop when one of the lists has reached its end
        while(list1 != nullptr && list2 != nullptr){

            if(list1->val <= list2->val){
                last->next = list1;
                list1 = list1->next;
            }else{
                last->next = list2;
                list2 = list2->next;
            }
            last = last->next;
        }

        //When one list is finished, append the rest of the other one to list3
        if(list1 == nullptr){
            last->next = list2;
        }else{
            last->next = list1;
        }


        return solution.next;
    }
};