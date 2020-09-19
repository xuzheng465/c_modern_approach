class Solution
{
public:
    int fib(int n)
    {
        int arr[2] = {0, 1};
        for (int i = 2; i <= n; ++i)
        {
            // 偶数 & 1 == 0; 奇数 & 1 == 1
            arr[i & 1] = (arr[0] + arr[1]) % (int)(1e9 + 7);
        }
        return arr[n & 1];
    }
}