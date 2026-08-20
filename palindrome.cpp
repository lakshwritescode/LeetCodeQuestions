class Solution {
public:
    bool isPalindrome(int x) {
        long long OGx = x;
        long long reverseNum = 0;
        while(x > 0)
        {
            long long lastdigit = x % 10;
            reverseNum = (reverseNum*10) + lastdigit;
            x = x/10;
        }
        if( OGx == reverseNum ) return true;
        else return false;

    }
};