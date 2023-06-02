#include<iostream>
using namespace std;

int findDuplicates(int arr[], int n){
    int ans = 0;

    //Xoring all array elements
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    
    //Xoring all 1 to n - 1 elements
    for(int i = 0; i < n; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    int arr[] = {5,1,2,3,4,2};
    cout << "Duplicate number is: " << findDuplicates(arr, 6);
}