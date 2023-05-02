#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin >> n;

    //Step 1: Take 2s Complement
    int twosComplement = ~n + 1;

    //Step 3: Take its binary form
    float ans = 0;
    int i = 0;
    while(twosComplement != 0){
        int bit = twosComplement & 1;
        ans = (bit * pow(10,i)) + ans;
        twosComplement = twosComplement >> 1;
        i += 1;
    }
    
    cout << "ans is: " << ans << endl;
}