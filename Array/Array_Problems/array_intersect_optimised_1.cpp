#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

void printArray(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
    vector<int> ans;
    int i = 0,  j = 0;
    
    // i for arr1 and j for arr2
    // below is also approach for 2 pointers

    while(i < m && j < n){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(3);

    vector<int> ans = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    printArray(ans); 
}