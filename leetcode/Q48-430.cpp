class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) return head;

        Node* curr = head;

        while (curr != NULL) {

            if (curr->child != NULL) {

                // flatten child
                Node* next = curr->next; 

                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                // find tail - but don't modify curr
                Node* tail = curr->next;  
                while (tail->next != NULL) {
                    tail = tail->next;
                }

                // attach back to next part
                if (next != NULL) {
                    tail->next = next;
                    next->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};
