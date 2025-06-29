#include<bits/stdc++.h>
using namespace std;

int removeDuplicats(vector<int> arr) {
    int i = 0;
    for(int j=1; j<arr.size(); j++) {
        if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;

}

int main() {
    vector<int> arr = {1,2,2,2,3,3,3,4,5,6,6,7,7,8,8,9};
    cout << removeDuplicats(arr);
}