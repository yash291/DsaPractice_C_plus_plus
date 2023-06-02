#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swapAlternate(int arr[], int n){
    for(int i = 0; i < n; i+=2)
        if(i + 1 < n)
            swap(arr[i],arr[i+1]);
}

int main(){
    int even[] = {1,2,3,4,5,6};
    int odd[] = {1,2,3,4,5};

    swapAlternate(even, 6);
    printArray(even, 6);

    swapAlternate(odd, 5);
    printArray(odd, 5);

}