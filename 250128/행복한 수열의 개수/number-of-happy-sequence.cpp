#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    int count = 0;

    // 행별 검사
    for (int i = 0; i < n; ++i) {
        int cnt = 1;
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == grid[i][j - 1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (cnt >= m) {
                count++;
                break;
            }
        }
    }

    // 열별 검사
    for (int j = 0; j < n; ++j) {
        int cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (grid[i][j] == grid[i - 1][j]) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (cnt >= m) {
                count++;
                break;
            }
        }
    }

    cout << count << '\n';

    return 0;
}