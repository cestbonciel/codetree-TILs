#include <iostream>
#include <string>

using namespace std;


int dx[] = {0, 1, 0, -1}; 
int dy[] = {1, 0, -1, 0}; 

int main() {
    string commands;
    cin >> commands;

    int x = 0, y = 0;
    int direction = 0; 

    for (char command : commands) {
        if (command == 'L') {
            direction = (direction + 3) % 4; 
        } else if (command == 'R') {
            direction = (direction + 1) % 4; 
        } else if (command == 'F') {
            x += dx[direction];
            y += dy[direction];
        }
    }

    cout << x << " " << y << endl;
    return 0;
}
