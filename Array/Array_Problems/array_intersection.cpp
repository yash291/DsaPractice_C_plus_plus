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
    for(int i = 0; i < n; i++){
        int element = arr1[i];
        for(int j = 0; j < m; j++){
            if(element < arr2[j])
                break;
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);

    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(5);

    vector<int> ans = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    printArray(ans); 
}