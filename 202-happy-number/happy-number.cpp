class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4)
        {
            n = sumOfsquares(n);
        }

        if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int sumOfsquares(int n)
    {
        int sum = 0;
        while(n>0)
        {
            int digit = n%10;
            sum += digit*digit;
            n /= 10;
        }
        return sum;
    }
};