#include<iostream>
using namespace std;

int main(){

    int number[15];
    cout << "Value at 0th index: " << number[0] << endl;
    cout << "Everything is fine" << endl;

    int second[] = {5,7,11};
    cout << "Value at 2nd index: " << second[2] << endl;

    int third[15] = {2,7};
    int n = 15;
    //print the array
    for(int i = 0; i < n; i++)
        cout << third[i] << " ";
    
    cout << endl;

    int fourth[10] = {0};
    n = 10;
    //print the array
    for(int i = 0; i < n; i++)
        cout << fourth[i] << " ";
    
    cout << endl;

    int fifth[10] = {1};
    n = 10;
    //print the array
    for(int i = 0; i < n; i++)
        cout << fifth[i] << " ";
    
    return 0;
}