#include <iostream>
#include <vector>

using namespace std;



int main() {
    // Please write your code here.
    int N;
    cin >> N;

    const int OFFSET = 100;
    const int SIZE = 210;
    vector<vector<bool>> grid(SIZE, vector<bool>(SIZE, false));

    while(N--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                grid[x + OFFSET][y + OFFSET] = true;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if(grid[i][j])
                area++;
        }
    }
    
    cout << area << endl;
    return 0;
}