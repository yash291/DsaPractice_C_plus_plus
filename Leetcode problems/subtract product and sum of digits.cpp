#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    return subtractProductAndSum(n);
}
int subtractProductAndSum(int n) {
    int product = 1;
    int num = n;
    while(num > 0){
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }
    int sum = 0;
    int num2 = n;
    while(num2 > 0){
        int digit = num2 % 10;
        sum += digit;
        num2 /= 10;
    }
    return product - sum;
}
