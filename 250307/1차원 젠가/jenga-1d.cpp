#include <bits/stdc++.h>
using namespace std;

// 구간 [s, e] (1-based index) 블록을 제거하는 함수
void removeBlocks(vector<int> &blocks, int s, int e) {
    blocks.erase(blocks.begin() + (s - 1), blocks.begin() + (e - 1) + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N; // 블록 개수

    // 블록들(맨 위에서부터 차례대로)
    vector<int> blocks(N);
    for(int i = 0; i < N; i++){
        cin >> blocks[i];
    }

    // 첫 번째 제거 구간 (s1, e1)
    int s1, e1;
    cin >> s1 >> e1;
    // 구간 제거
    removeBlocks(blocks, s1, e1);

    // 두 번째 제거 구간 (s2, e2)
    int s2, e2;
    cin >> s2 >> e2;
    // 구간 제거
    removeBlocks(blocks, s2, e2);

    // 남은 블록 개수
    int remain = blocks.size();
    cout << remain << "\n";
    // 남아있는 블록이 있다면 맨 위부터 차례대로 출력
    if(remain > 0) {
        for(int i = 0; i < remain; i++){
            cout << blocks[i] << "\n";
        }
    }

    return 0;
}
