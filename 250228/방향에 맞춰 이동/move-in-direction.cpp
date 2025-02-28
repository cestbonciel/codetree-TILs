#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    char directions[4] = {'N', 'E', 'S', 'W'};
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0;

    for (int i = 0; i < N; i++) {
        char d;
        int dist;
        cin >> d >> dist;

        for (int j = 0; j < 4; j++) {

            if (d == directions[j]) {
                x += dx[j] * dist;
                y += dy[j] * dist;
                break;
            }
        }
    } 

    cout << x << " " << y << endl;

    return 0;
}