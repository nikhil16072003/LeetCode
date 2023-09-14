class Solution {
public:
    long long int findMin(long long int n, int sum) {
        if (n == 1) {
            return sum;
        }
        
        if (n % 2 == 0) {
            return findMin(n / 2, sum + 1);
        } else {
            long long int option1 = findMin(n + 1, sum + 1);
            long long int option2 = findMin(n - 1, sum + 1);
            return min(option1, option2);
        }
    }

    int integerReplacement(int n) {
        return findMin(n, 0);
    }
};
