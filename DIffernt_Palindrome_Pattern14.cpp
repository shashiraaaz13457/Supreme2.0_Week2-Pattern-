#include <iostream>
using namespace std;

//CHATGPT
int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Print characters in ascending order
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }

        // Print characters in descending order (excluding 'A')
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
