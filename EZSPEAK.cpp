#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int con_cons = 0;
        bool can_pronounce = true;

        for (int i = 0; i < n; i++) {
            char c = s[i];

            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                con_cons++;

                if (con_cons >= 4) {
                    can_pronounce = false;
                    break;
                }
            } else {
                con_cons = 0;
            }
        }

        if (can_pronounce) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

