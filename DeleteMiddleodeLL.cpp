class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* curr = head;
        int count = 0;

        while (curr != NULL) {
            count++;
            curr = curr->next;
        }

        ListNode* temp = head;

        int n = count / 2;

        while (temp != NULL && temp->next!=NULL) {
            n--;
            if (n == 0) {
                ListNode* middle = temp->next;
                temp->next = temp->next->next;
                delete (middle);
                break;
            }

            temp = temp->next;
        } 

       

        return head;
    }
};