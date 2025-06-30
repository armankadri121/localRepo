#include<bits/stdc++.h>
using namespace std;

void intersectionArray(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr2[j] < arr1[i]) {
            j++;
        }
        else {
            ans.emplace_back(arr1[i]);
            i++;
            j++;
        }
    }

    for(auto it: ans) {
        cout << it << " ";
    }
}

int main() {
    vector<int> arr1 = {1,2,3,4,5,6,7,11,12};
    vector<int> arr2 = {1,2,3,4,5,6,7,9,10,11};
    intersectionArray(arr1, arr2);
    // for(auto it: arr) {
    //     cout << it << " ";
    // }
}