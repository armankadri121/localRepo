#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr) {
    for(int i=1; i<arr.size(); i++) {
        if(arr[i] >= arr[i-1]) {

        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    bool ans = false;
    vector<int> arr = {1,2,3,4,4,5,5,6};
    cout << isSorted(arr);
    
}