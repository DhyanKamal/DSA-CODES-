class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        if (!head) return NULL;  // Edge case: Empty list
        
        // Initialize separate head and tail pointers for 0s, 1s, and 2s
        Node *h1 = NULL, *h2 = NULL, *h3 = NULL;  // Heads
        Node *t1 = NULL, *t2 = NULL, *t3 = NULL;  // Tails
        
        // Traverse the original list
        while (head) {
            if (head->data == 0) {
                if (!h1) {
                    h1 = head;
                    t1 = head;
                } else {
                    t1->next = head;
                    t1 = t1->next;
                }
            } else if (head->data == 1) {
                if (!h2) {
                    h2 = head;
                    t2 = head;
                } else {
                    t2->next = head;
                    t2 = t2->next;
                }
            } else {
                if (!h3) {
                    h3 = head;
                    t3 = head;
                } else {
                    t3->next = head;
                    t3 = t3->next;
                }
            }
            head = head->next;  // Move to the next node
        }
        
        // Ensure the tails of all the lists are terminated properly
        if (t1) t1->next = NULL;
        if (t2) t2->next = NULL;
        if (t3) t3->next = NULL;
        
        // Combine the lists:
        // First connect list of 0s and 1s
        if (h1) {
            t1->next = h2;
        } else {
            h1 = h2;  // If no 0s, start with list of 1s
        }
        
        // Connect list of 1s and 2s
        if (h2) {
            t2->next = h3;
        } else if (h1) {
            t1->next = h3;  // In case there are no 1s, connect 0s list directly to 2s
        } else {
            h1 = h3;  // If no 0s and 1s, start with list of 2s
        }
        
        return h1;  // Return the new head of the segregated list
    }
};
