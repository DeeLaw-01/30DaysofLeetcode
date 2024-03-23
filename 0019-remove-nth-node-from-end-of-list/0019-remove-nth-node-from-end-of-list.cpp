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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head ->next == nullptr || head == nullptr){
            head = nullptr;
            return head;
        }
        if(n == 1){
            deleteFromTail(head);
            return head;
        }
        int len = 0;
        ListNode* temp = head;
        while(temp->next != nullptr){
            len++;
            temp = temp->next;
        }
        if(len+1 == n){
            removeFromHead(head);
            return head;
        }
        temp = head;
        for(size_t i =0; i < (len-n); ++i ){
            temp = temp->next;
        }
        helperRemoveNthNode(temp);
        return head;
    }
    void helperRemoveNthNode(ListNode*& pre){
        ListNode* toDelete = pre->next;
        ListNode* after = toDelete->next;
        delete (toDelete);
        pre->next = after;
    }
    void deleteFromTail(ListNode*& head){
        ListNode* temp = head;
        while((temp->next)->next != nullptr){
            temp = temp->next;
        }
        ListNode* toDelete = temp->next;
        delete toDelete;
        temp->next = nullptr;
    }
    void removeFromHead(ListNode*& head){
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
    }
};