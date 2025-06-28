#include<iostream>
using namespace std;

int main() {
    string s = "aaaef";
    int q = 5;

    int hash[256] = {0};
    for(int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }
    char ch;
    while(q--) {
        cin >> ch;
        cout << "The character " << ch << " is present " << hash[ch] << " times." << endl;
    }
}