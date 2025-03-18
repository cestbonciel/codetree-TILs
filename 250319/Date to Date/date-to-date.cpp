#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 달의 마지막 날보다 day 가 크면 다음 달로 넘어간다.
// 시작일을 포함해서 세야한다. cnt

    
int days = 0;
int main() {
    cin >> m1 >> d1 >> m2 >> d2;


    if (m1 == m2) {
        // 같은 달이면 d1 ~ d2의 일 수만 계산
        days = d2 - d1 + 1;
    } else {
        // 첫 번째 달의 남은 날짜 (오늘 포함)
        days += num_of_days[m1] - d1 + 1;

        // 중간 달의 전체 날짜 합
        for (int m = m1 + 1; m < m2; m++) {
            days += num_of_days[m];
        }

        // 마지막 달의 지난 날짜 추가
        days += d2;
    }

    cout << days;

    return 0;
}