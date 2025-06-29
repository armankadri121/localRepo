#include<bits/stdc++.h>
using namespace std;

class QuickSort {
    int partition(vector<int> &arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while(i<j) {
            while(arr[i] <= pivot && i <= high -1) {
                i++;
            }
            while(arr[j] > pivot && j >= low + 1) {
                j--;
            }

            if(i < j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    } 

    public:
    void quickSort(vector<int> &arr, int low, int high) {
        if(low < high) {
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex-1);
            quickSort(arr, pIndex + 1, high);
        }
    }

};

int main() {
    vector<int> arr = {4,5,3,56,36,42,663,64,25,2,64,25};
    QuickSort obj;
    obj.quickSort(arr, 0, arr.size()-1);
    for(auto it: arr) {
        cout << it << " ";
    }

}