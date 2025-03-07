#include <iostream>
#include <vector>
#include <cstdlib>    
#include <algorithm>  

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;  

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];  
    }

    int ans = 1e9; 

    // j번 집으로 모두 모일 때의 총 이동 거리를 계산
    for (int j = 1; j <= N; j++) {
        int distSum = 0;  
        
        for (int i = 1; i <= N; i++) {
            int distance = abs(i - j);  
            distSum += A[i - 1] * distance;  
        }
        ans = min(ans, distSum);
    }
    
    cout << ans << "\n";
    return 0;
}
