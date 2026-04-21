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

 // you can take a previous and make it as null, an curr at head, and next at
 // the head's next. 
 // so now we can reverse - head next (curr -> next )= pre , next -> head = curr,  pre ++. curr ++ 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* temp = curr -> next;
            curr-> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
        
    }
};
