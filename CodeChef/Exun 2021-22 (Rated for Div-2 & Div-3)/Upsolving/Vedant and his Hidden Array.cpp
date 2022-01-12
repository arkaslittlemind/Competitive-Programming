Question Link- https://www.codechef.com/EXUN21C/problems/SUMPARITY

#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int N1, N2;
        cin >> N1 >> N2;

        if (N1 == 1) {
            if (N2 % 2 == 0) {
                cout << "Even" << endl;
            }
            else {
                cout << "Odd" << endl;
            }
            continue;
        }
        if (N2 % 2 == 1) {
            if (N1 % 2 == 0) {
                cout << "Even" << endl;
            }
            else {
                cout << "Odd" << endl;
            }
        }
        else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
