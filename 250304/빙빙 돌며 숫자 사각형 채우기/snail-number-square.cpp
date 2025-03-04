#include <iostream>

using namespace std;

int n, m;
int arr[100][100];

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j ++) {
            arr[i][j] = 0;
        } 
    }
    // Please write your code here.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir = 0;
    int x = 0, y = 0; 

for (int i = 1; i <= n*m; i++) {
    arr[x][y] = i;

    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (nx < 0 || nx >= n || ny < 0 || ny >= m || arr[nx][ny] != 0) {
        dir = (dir + 1) % 4;
        nx = x + dx[dir];
        ny = y + dy[dir];
    }

    x = nx;
    y = ny;
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout << arr[i][j];
        if(j < m - 1) cout << " ";  // 공백으로 구분
    }
    cout << "\n";  // 각 행 출력 후 줄바꿈
}

    return 0;
}