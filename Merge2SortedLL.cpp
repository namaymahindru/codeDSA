class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *dummyNode = new ListNode(-1);
        ListNode *temp = dummyNode;
        ListNode *head1 = list1;
        ListNode *head2 = list2;

        while (head1 != NULL && head2 != NULL)
        {
            if (head1->val < head2->val)
            {
                temp->next = head1;
                temp = head1;
                head1 = head1->next;
            }

            else
            {
                temp->next = head2;
                temp = head2;
                head2 = head2->next;
            }
        }

        if (head1)
            temp->next = head1;
        if (head2)
            temp->next = head2;

        return dummyNode->next;
    }
};