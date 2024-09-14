class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // Create the new node to insert
        Node *newNode = new Node(data);
        
        // If the list is empty, initialize the circular list with the new node
        if (head == nullptr) {
            newNode->next = newNode;
            return newNode;
        }
        
        // If the new data should be inserted before the head node
        if (data <= head->data) {
            Node *temp = head;
            
            // Find the last node that links back to head
            while (temp->next != head) {
                temp = temp->next;
            }
            
            // Insert new node before head and update links
            temp->next = newNode;
            newNode->next = head;
            return newNode; // The new node is now the head
        }
        
        // Otherwise, find the correct position to insert the new node
        Node *curr = head;
        while (curr->next != head && curr->next->data < data) {
            curr = curr->next;
        }
        
        // Insert the new node at its position
        newNode->next = curr->next;
        curr->next = newNode;
        
        // Return the original head since the head hasn't changed
        return head;
    }
};