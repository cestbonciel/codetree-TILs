#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int numDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int cnt = 0;
    int m = m1, d = d1;
    
    while (true) {
        cnt++;              
        if (m == m2 && d == d2) break;  
        
        d++;  // 다음 날로 이동
        if (d > numDays[m]) {  
            m++;             
            d = 1;           
        }
    }
    
    cout << cnt << endl;
    return 0;
}