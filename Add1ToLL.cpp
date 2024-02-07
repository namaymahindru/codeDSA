int addHelper(Node *temp)
{
    if (temp == NULL)
        return 1;
    int carry = addHelper(temp->next);
    temp->data += carry;
    if (temp->data < 10)
        return 0;
    temp->data = 0;
    return 1;
}

Node *addOne(Node *head)
{
    // Adding 1 to the LinkedList and returning the Linked List answer..

    int carry = addHelper(head);
    if (carry == 1)
    {
        Node *newNode = new Node(1);
        newNode->next = head;
        head = newNode;
    }

    return head;
}