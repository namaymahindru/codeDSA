class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        // Your code here
        unordered_map<int, int> mpp;

        int maxLen = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (sum == 0)
            {
                maxLen = i + 1;
            }

            else
            {
                if (mpp.find(sum) != mpp.end())
                {
                    maxLen = max(maxLen, i - mpp[sum]);
                }

                else
                {
                    mpp[sum] = i;
                }
            }
        }

        return maxLen;
    }
};