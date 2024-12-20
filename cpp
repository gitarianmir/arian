#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "no";
        return 0;
    }

    if (n % 2 == 0 && n != 2) {
        cout << "no";
        return 0;
    }

    for (int i = 3; i <= n / 2; i += 2) {
        if (n % i == 0) {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
    return 0;
}
