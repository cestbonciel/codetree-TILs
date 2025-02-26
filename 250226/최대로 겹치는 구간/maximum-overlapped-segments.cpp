#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Event {
    int x;
    int type; 
};

int main() {
    int N;
    cin >> N;
    vector<Event> events;
    
    for (int i = 0; i < N; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        events.push_back({x1, 1});  
        events.push_back({x2, -1}); 
    }
    
    
    sort(events.begin(), events.end(), [](const Event &a, const Event &b) {
        if(a.x == b.x) return a.type < b.type;
        return a.x < b.x;
    });
    
    int cnt = 0, ans = 0;
    for (const auto &event : events) {
        if (event.type == 1) { 
            cnt++;
            ans = max(ans, cnt);
        } else { 
            cnt--;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
