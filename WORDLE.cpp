#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, T, M;
        cin >> S >> T;

        // Compare each character in S and T
        for (int i = 0; i < 5; i++) {
            if (S[i] == T[i]) {
                M += 'G'; // Correct guess
            } else {
                M += 'B'; // Incorrect guess
            }
        }

        cout << M << endl;
    }

    return 0;
}

