#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n) {
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,0,3,4,0,0,0,5,6,7};
    cout << linearSearch(arr, 5);
}