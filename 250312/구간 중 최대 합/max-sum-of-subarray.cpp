#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100];

// 가능한 모든 구간들에 대해
// 구간의 시작점이 0 ~ n-k 까지 일때 
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        // 구간 내의 합을 구한다.
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i <= n - k; i ++) {
        int tempSum = 0;
        for (int j = 0; j < k; j++) {
            tempSum += arr[i + j];
        }
        ans = max(ans, tempSum);
    }

    cout << ans << endl;

    return 0;
}