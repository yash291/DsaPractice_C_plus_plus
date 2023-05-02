#include<iostream>
using namespace std;

bool isEven(int a){
    //odd
    //Bitwise AND with 1 will always give 1 as the result if 
    //the integer has a one at the least significant bit (all the odd integers in 
    //this case). So, the result will be 1 in all the cases.
    if(a & 1){
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cin >> n;

    if(isEven(n)){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
}