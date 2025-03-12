#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;

    int l = A.size();

    int cnt = 0;
    // 모든 문자 쌍들에 대해
    // 문자 쌍은 i 번째, j 번째 위치 
    for (int i = 0; i < l; i++) {
        for (int j = i+1; j < l; j++) {
            if (A[i] == '(' && A[j] == ')') {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}