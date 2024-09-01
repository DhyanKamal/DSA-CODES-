class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;  // Edge cases
        
        ListNode* temp = head;
        int count = 1;
        
        
        while (temp->next) {
            count++;
            temp = temp->next;
        }
        
       
        temp->next = head;
        
        
        int x = count - k % count;  
        for (int i = 0; i < x; i++) {
            temp = temp->next;
        }
        
       
        head = temp->next;
        temp->next = nullptr;
        
        return head;
    }
};