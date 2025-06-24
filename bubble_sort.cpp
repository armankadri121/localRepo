#include<bits/stdc++.h>
using namespace std;

class bubbleSort
{
    public:
    void sortArray(vector<int>& arr){
        for(int i=0; i<arr.size()-1; i++) {
            for(int j=0; j<arr.size()-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        cout << "[";
        for(int i=0; i<arr.size(); i++) {
            cout << arr[i];
            if(i != arr.size()-1) cout << ", ";
        }
        cout << "]";
    

    }

};

int main() {
    vector<int> arr = {3,2,4,5,6,1};
    bubbleSort obj;
    obj.sortArray(arr);
}

