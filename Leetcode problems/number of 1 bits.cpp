#include<iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        // here n is converted from binary to integer then it is given to us 
        //Note: Please check n always before solvineg any question

        int count = 0;
        while(n != 0){
            //checking last bit
            //n & 1 is true i.e 1 so if last bit is 1 then we incrrase the count
            //here it is bitwise and
            if(n & 1){
                count += 1;
            }
            //if we do right shift then each bit is shifted right by 1 bit
            n = n >> 1;
        }
        return count;
    }
};