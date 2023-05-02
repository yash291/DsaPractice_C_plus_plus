#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        //first triangle
        int j = 1;
        while(j <= n - i + 1){
            cout << j;
            j += 1;
        }
        int star = 2*i - 2;
        while(star){
            cout << "*";
            star -= 1;
        }
        int k = n - i + 1;
        while(k >= 1){
            cout << k;
            k -= 1;
        }
        cout << endl;
        i += 1;
    }
}