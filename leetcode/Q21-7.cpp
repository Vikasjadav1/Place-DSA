class Solution {
public:
    int reverse(int n) {

        int sign = (n < 0 ? -1 : 1);   // store sign
        n = abs(n);             

        int reverse=0;
        while(n!=0){
            int lastdigit=n%10;
            reverse=reverse*10+lastdigit;
            n=n/10;
        }
        return reverse*sign;
    }
};