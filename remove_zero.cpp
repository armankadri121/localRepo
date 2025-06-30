#include<bits/stdc++.h>
using namespace std;

void removeZeros(vector<int> &arr, int n) {
    int j = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i = j+1; i<n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

}

int main() {
    vector<int> arr = {1,2,0,3,4,0,0,0,5,6,7};
    removeZeros(arr, arr.size());
    for(auto it: arr) {
        cout << it << " ";
    }
}