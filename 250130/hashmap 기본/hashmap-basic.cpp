#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
string cmd[100000];
int k[100000];
int v[100000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd[i];
        cin >> k[i];
        if (cmd[i] == "add") {
            cin >> v[i];
        }
    }

    unordered_map<int, int> map;
    
    // Write your code here!
    for (int i = 0; i < n; i++) {
        if (cmd[i] == "add") {
            map[k[i]] = v[i];
        } else if (cmd[i] == "remove") {
            map.erase(k[i]);
        } else if (cmd[i] == "find") {
            if (map.find(k[i]) != map.end()) {
                cout << map[k[i]] << endl;
            } else {
                cout << "None" << endl;
            }
        }
    }

    return 0;
}
