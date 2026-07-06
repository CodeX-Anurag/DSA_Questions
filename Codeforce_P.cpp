// Codeforces problems. 
#include <iostream>
using namespace std;



// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//         }
//         cout << n / 2 << "\n";
//     }
//     return 0;
// }

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x % 2 == 1 && y % 2 == 1)
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
    return 0;
}


// *************************** DIV B ************************
/*  B. Palindrome, Twelve and Two Terms   ( 2232 B )  */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        bool found = false; 
        for (int a = 0; a <= 9; a++) {
            long long b = n - a;

            if (b >= 0 && b % 12 == 0) {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            for (int a = 11; a <= 99; a += 11) {
                long long b = n - a;

                if (b >= 0 && b % 12 == 0) {
                    cout << a << " " << b << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}