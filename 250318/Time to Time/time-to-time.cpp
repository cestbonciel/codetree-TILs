#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    int cnt = 0;
    while (a != c || b != d) {

        b += 1; 
        cnt += 1; 

        if (b == 60) {
            a += 1;
            b = 0;
        }
    }
    cout << cnt;
    return 0;
}