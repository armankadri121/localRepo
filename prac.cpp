#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i=1; i<=n; i++) {
        // space
        for(int j=1; j<=n-i; j++) {
            cout << "   ";
        }
        // cout << i;

        // pattern
        for(int k=1; k<=i; k++) {
            cout << k << "  ";
        }

        // // space
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}