#include<bits/stdc++.h>
using namespace std;

class SecondLarget {
    public:
    int secondLargest(vector<int> &arr) {
        int largest = arr[0];
        int slargest = INT_MIN;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i] > largest) {
                slargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > slargest) {
                slargest = arr[i];
            }
        }
        return slargest;
    }

};

int main() {
    vector<int> arr = {4,56,3,3,4543,35,6,63,64,4543,3,63,7};
    SecondLarget obj;
    cout << obj.secondLargest(arr);

}