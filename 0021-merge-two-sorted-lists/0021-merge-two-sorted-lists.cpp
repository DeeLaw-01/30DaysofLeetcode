/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };r
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr){return nullptr;}
        if(l1 == nullptr){return l2;}
        if(l2== nullptr){return l1;}
        ListNode* sol = nullptr;
        if(l1->val < l2->val){
            sol = l1;
            l1 = l1->next;
        }
        else{
            sol = l2;
            l2 = l2->next;
        }
        ListNode* temp = sol;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val < l2->val){
                temp->next = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        if(l1 == nullptr && l2 == nullptr){
            return sol;
        }
        if(l1 == nullptr){
            temp->next = l2;
        }
        else{
            temp->next = l1;
        }
        return sol;
    }

        

};