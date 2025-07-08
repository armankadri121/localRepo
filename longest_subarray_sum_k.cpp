#include<bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> &arr, int k) {
    int n = arr.size();
    int maxLen = 0;
    int sum = arr[0];
    int right = 0, left = 0;
    while(right < n) {
        while(sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left);
        }
        
        right++;
        if(right < n) sum += arr[right];
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1,2,1,1,1,1,3,3};
    cout << longestSubArray(arr, 6);
}