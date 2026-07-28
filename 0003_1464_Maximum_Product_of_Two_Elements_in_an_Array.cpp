class Solution{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int m1 = -1;
        int p1 = -1;
        for (int i = 0; i < n; i++)
        {
            if (m1 <= nums[i])
            {
                m1 = nums[i];
                p1 = i;
            }
        }

        int m2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (m2 <= nums[i] && p1 != i)
            {
                m2 = nums[i];
            }
        }

        return (m1 - 1) * (m2 - 1);
    }
};