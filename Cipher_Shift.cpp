#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    int key;

    cout << "Enter message: ";
    getline(cin, text);
    cout << "Enter key: ";
    cin >> key;

    string encrypted = "", decrypted = "";

    for (char c : text) {
        if (c >= 'a' && c <= 'z') {
            encrypted += (c - 'a' + key) % 26 + 'a';
        } else {
            encrypted += c; 
        }
    }
    for (char c : encrypted) {
        if (c >= 'a' && c <= 'z') {
            decrypted += (c - 'a' - key + 26) % 26 + 'a';
        } else {
            decrypted += c;
        }
    }
    cout << "\nEncrypted: " << encrypted << endl;
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
