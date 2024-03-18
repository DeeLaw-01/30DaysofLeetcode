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
        // If head == nullptr, return it.
        if(head == nullptr){
            return head;
        }
        // Create solution list to return.
        ListNode* reverseList = nullptr;
        // Vector array to store all list element values
        vector<int>solution;
        // Iterate over all nodes and store the values in 'solution' array
        while(head != nullptr){
            solution.push_back(head->val);
            head = head->next;
        }
        // Iterate over 'solution' in reverse and put it into the 'solution' list
        for(int i = solution.size()-1; i>=0 ; --i){
            addNode(reverseList,solution[i]);
        }
        return reverseList;
    }
    void addNode(ListNode*& head, int value){
        // If head == nullptr, override it with parameter value
        if(head == nullptr){
            head = new ListNode(value);
            return;
        }
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        ListNode* newNode = new ListNode(value);
        temp->next= newNode;
    }
};