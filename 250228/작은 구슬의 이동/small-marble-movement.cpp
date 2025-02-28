#include <bits/stdc++.h>
using namespace std;

int getPosition(int N, int p, int d, int T) {

    if (d == 0 || N == 1) {

        return p;
    }

    while (T > 0) {

        int boundary = (d > 0 ? N : 1);
        int dist = llabs(boundary - p); 

        if (dist > T) {
            
            p += d * T;
            T = 0;
            break;
        }
        
        p = boundary; 
        T -= dist;   


        if (T == 0) {
            break;
        }

        
        T -= 1;
        d = -d;  

       
        if (T == 0) {
            break;
        }

        int cycleTime = 2LL * (N - 1) + 2;

        int fullCycle = T / cycleTime;
        if (fullCycle > 0) {
            T -= fullCycle * cycleTime;
        }

        if (T > 0) {
            int segDist = (N - 1); 
            if (T <= segDist) {

                p += d * T;
                T = 0;
                break;
            } else {

                p += d * segDist;
                T -= segDist;
            }
        }


        if (T == 0) break;

        T -= 1;
        d = -d;
        if (T == 0) break;


        if (T > 0) {
            int segDist = (N - 1);
            if (T <= segDist) {
                p += d * T;
                T = 0;
                break;
            } else {
                p += d * segDist;
                T -= segDist;
            }
        }

        if (T == 0) break;

        T -= 1;
        d = -d;

    }

    return p;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int T;
    cin >> N >> T;

    int R, C;
    char D;
    cin >> R >> C >> D;

    int rowDir = 0, colDir = 0;
    if (D == 'U') rowDir = -1;
    if (D == 'D') rowDir = +1;
    if (D == 'L') colDir = -1;
    if (D == 'R') colDir = +1;

    int finalR = getPosition(N, R, rowDir, T);
    int finalC = getPosition(N, C, colDir, T);

    cout << finalR << " " << finalC << "\n";
    return 0;
}
