class Solution{
public:
    int maxProduct(int n)
    {
        int m1 = max(n % 10, (n % 100) / 10);
        int m2 = min(n % 10, (n % 100) / 10);
        int temp;
        n = n / 100;
        while (n > 0)
        {
            temp = n % 10;
            if (temp >= m1)
            {
                m2 = m1;
                m1 = temp;
            }
            else if (temp >= m2)
            {
                m2 = temp;
            }
            n = n / 10;
        }
        return m1 * m2;
    }
};