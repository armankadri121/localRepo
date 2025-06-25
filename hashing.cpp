#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,3,7,7,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int q = 4;

    int hash[16] = {0};
    for(int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }
    
    while(q--) {
        int num;
        cin >> num;

        cout << hash[num] << endl;
    }
}