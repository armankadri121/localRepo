#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1,3,7,7,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int q = 4;
    int max = *max_element(arr, arr+n);
    cout << max;

    int hash[max+1] = {0};
    for(int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }
    
    while(q--) {
        int num;
        cin >> num;

        cout << hash[num] << endl;
    }
}