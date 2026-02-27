#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;

    int count = 0;
    while (n != 0) {
        if (n & 1) {   // check last bit
            count++;
        }
        n = n >> 1;    // shift right
    }

    cout << "Number of set bits: " << count << endl;

    return 0; // success exit code
}