#include <bits/stdc++.h>
using namespace std;

#define int long long

int makeQuery(int x, int y) {
    cout << "? " << x << " " << y << endl;
    int q; 
    cin >> q; 
    return q;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases; 
    cin >> testCases;

    while(testCases--) {
        int rows, cols;
        cin >> rows >> cols;

        int q1 = makeQuery(1, 1);

        int xCoord = min(rows, 1 + q1);
        int yCoord = min(cols, 1 + q1);

        int q2 = makeQuery(xCoord, q1 - xCoord + 2);
        int q3 = makeQuery(q1 - yCoord + 2, yCoord);

        int finale = 0;

        if(xCoord - q2 / 2 <= rows && q1 - xCoord + 2 + q2 / 2 <= cols && q2 % 2 == 0) {
            int q4 = makeQuery(xCoord - q2 / 2, q1 - xCoord + 2 + q2 / 2);
            finale = (q4 != 0);
        } else {
            finale = 1;
        }
        
        if(finale == 0) {
            cout << "! " << xCoord - q2 / 2 << " " << q1 - xCoord + 2 + q2 / 2 << endl;
        } else {
            cout << "! " << q1 - yCoord + 2 + q3 / 2 << " " << yCoord - q3 / 2 << endl;
        }
    }

    return 0;
}
