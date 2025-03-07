#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, c;
    cin >> n >> r >> c;

    // 격자 정보를 저장할 2차원 벡터
    vector<vector<int>> a(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // 방문한 칸의 값을 기록할 벡터
    vector<int> visited;

    int dr[4] = {-1, 1, 0, 0}; 
    int dc[4] = { 0, 0, 1,-1};

    // 현재 위치
    int curR = r, curC = c;

    while (true) {
        // 현재 칸의 값 방문 기록
        visited.push_back(a[curR][curC]);

        bool moved = false;
  
        for (int i = 0; i < 4; i++) {
            int nr = curR + dr[i];
            int nc = curC + dc[i];

            // 범위 확인 & 현재 값보다 더 큰 값이면 이동
            if (nr >= 1 && nr <= n && nc >= 1 && nc <= n) {
                if (a[nr][nc] > a[curR][curC]) {
                    curR = nr;
                    curC = nc;
                    moved = true;
                    break;
                }
            }
        }
        // 더 이상 이동할 곳이 없으면 종료
        if (!moved) {
            break;
        }
    }

    // 방문한 칸에 적힌 숫자 출력
    for (int i = 0; i < (int)visited.size(); i++) {
        cout << visited[i];
        if (i < (int)visited.size() - 1) {
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}
