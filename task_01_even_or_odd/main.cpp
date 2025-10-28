#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Zadaj cislo: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
    return 0;
}

// This program reads an integer from the user and determines if it is even or odd.