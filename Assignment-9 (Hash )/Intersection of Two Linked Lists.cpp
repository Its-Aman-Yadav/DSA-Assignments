//https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
             map<ListNode*, bool> m;
             while(headA){
               m[headA] = true;
               headA = headA->next;
               }

               while(headB){
                 if(m[headB])
                   return headB;
                headB=headB->next;
               }
               
        return NULL;
    }
};
