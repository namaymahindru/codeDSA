int countNodesinLoop(struct Node *head)
{
    // Code here

    struct Node *temp = head;
    map<Node *, int> mpp;

    int timer = 1;
    while (temp != NULL)
    {
        if (mpp.find(temp) != mpp.end())
        {

            int value = mpp[temp];
            return timer - value;
        }

        mpp[temp] = timer;
        timer++;
        temp = temp->next;
    }

    return 0;
}

// Time complexity= O(N*2*logN)
// Space Complexity= O(N) // Due to the use of map ds