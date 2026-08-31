class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int digit=0;
        int digitsum=0;
        int digitproduct=1;
        int divisor=0;
        while(temp!=0){
digit=temp%10;
digitsum+=digit;
digitproduct*=digit;
temp/=10;
        }
        divisor=digitsum+digitproduct;
        if(n%divisor==0) return true;
        return false;
    }
};