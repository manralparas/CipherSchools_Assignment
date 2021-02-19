class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
            if(!head||!head->next)
                return head;
        ListNode * odd = head;
        ListNode * even = head->next;
        ListNode * temp= even;
        while(even&&even->next){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
       odd->next=temp; 
        return head;
    }
};