#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Write your code here!
    int x = 0, y = 0; 


    int dx[256] = {}; 
    int dy[256] = {};

    dx['N'] = 0; dy['N'] = 1; 
    dx['S'] = 0; dy['S'] = -1; 
    dx['E'] = 1; dy['E'] = 0;  
    dx['W'] = -1; dy['W'] = 0; 

    for (int i = 0; i < n; i++) {
        x += dx[dir[i]] * dist[i]; 
        y += dy[dir[i]] * dist[i]; 
    }

    cout << x << " " << y << endl;
    return 0;
}