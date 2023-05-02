#include<iostream>
#include<limits.h>

using namespace std;
class Solution {
public:
    int reverse(int x) {
        int num = x;
        int rev = 0;
        while(num){
            int digit = num % 10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;
            rev = digit + (rev * 10);
            num = num / 10;
        }
        return rev;
    } 
};