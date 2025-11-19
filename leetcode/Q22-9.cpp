class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;
        int temp=n;
        int Palindrome=0;
        while(temp!=0){
            int lastnumber=temp%10;
             if (Palindrome > INT_MAX / 10) return false;
            Palindrome=Palindrome*10+lastnumber;
            temp=temp/10;
        }
        if(n==Palindrome){
            return true;
        }+
        return false;
    }
};