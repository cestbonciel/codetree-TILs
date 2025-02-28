#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;


    vector<vector<int>> grid(N, vector<int>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> grid[i][j];
        }
    }

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    auto inRange = [&](int x, int y) {
        return (x >= 0 && x < N && y >= 0 && y < N);
    };

    int answer = 0;

    for(int x = 0; x < N; x++){
        for(int y = 0; y < N; y++){
            int cnt = 0;
            for(int k = 0; k < 4; k++){
                int nx = x + dx[k];
                int ny = y + dy[k];
                if(inRange(nx, ny) && grid[nx][ny] == 1) {
                    cnt++;
                }
            }

            if(cnt >= 3){
                answer++;
            }
        }
    }

    cout << answer << endl;
    return 0;
}
