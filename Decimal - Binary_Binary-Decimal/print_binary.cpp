#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    //If anyone is not getting correct output  of Decimal to Bianry .Then use ans variable as float.Because many students 
    //are facing this issue in offline compiler.

    //5/2 the remainder is 1 
    //The 2/2 then the remainder is 0
    //After we divide 1/2 and then we have divisor is 0 and remainder is 1 due to this 
    //we use float answer inside of int ans
    
    float ans = 0;
    int i  = 0;

    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i += 1;
    }
    cout << "Answer is: " << ans << endl;
}