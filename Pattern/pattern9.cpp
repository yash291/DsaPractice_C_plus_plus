#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int space1 = n - i;
        while(space1){
            cout << " ";
            space1 -= 1;
        }
        int j = 1;
        while(j <= i){
            cout << j;
            j += 1;
        }
        int k = i - 1;
        while(k >= 1){
            cout << k;
            k -= 1;
        }
        cout << endl;
        i += 1;
    }
}
