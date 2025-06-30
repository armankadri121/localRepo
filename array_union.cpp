#include<bits/stdc++.h>
using namespace std;

void unionArray(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0;
    int j=0;
    vector<int> unionArray;
    while(i<n1 && j<n2) {
        if(arr1[i] <= arr2[j]) {
            if(unionArray.size() == 0 || arr1[i] != unionArray.back() ) {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(unionArray.size() == 0 || arr2[j] != unionArray.back() ) {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n1) {
        if(unionArray.size() == 0 || arr1[i] != unionArray.back() ) {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }

    while(j<n2) {
        if(unionArray.size() == 0 || arr2[j] != unionArray.back() ) {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }
    
    for(auto it: unionArray) {
        cout << it << " ";
    }
}

int main() {
    vector<int> arr1 = {1,2,3,4,5,6,7,11,12};
    vector<int> arr2 = {1,2,3,4,5,6,7,9,10};
    unionArray(arr1, arr2);
    // for(auto it: arr) {
    //     cout << it << " ";
    // }
}