#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int space = n - i;
        
        //space print
        while(space){
            cout << " ";
            space -= 1;
        }

        //stars print
        int j = 1;
        while(j <= i){
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}