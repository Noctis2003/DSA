//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
         long long sum = 0;
    for (int d = 1; d <= N; ++d) {
        sum += d * (N / d);
    }
    return sum;
    }
};