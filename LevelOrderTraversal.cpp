class Solution
{
public:
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *root)
    {
        // Your code here
        vector<int> result;
        if (root == NULL)
            return result;
        queue<Node *> q;

        q.push(root);

        while (!q.empty())
        {
            int size = q.size();

            for (int i = 0; i < size; i++)
            {

                Node *node = q.front();
                q.pop();
                result.push_back(node->data);

                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
            }
        }

        return result;
    }
};