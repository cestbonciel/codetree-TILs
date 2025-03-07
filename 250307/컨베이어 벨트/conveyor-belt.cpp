#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, T;
    cin >> N >> T;


    vector<int> topRow(N);
    for(int i = 0; i < N; i++){
        cin >> topRow[i];
    }
    
    vector<int> bottomRow(N);
    for(int i = 0; i < N; i++){
        cin >> bottomRow[i];
    }

    
    vector<int> belt(2*N);
    for(int i = 0; i < N; i++){
        belt[i] = topRow[i];
    }
    for(int i = 0; i < N; i++){
        belt[N + i] = bottomRow[i];
    }

    
    T %= (2*N);

    vector<int> newBelt(2*N);

    
    for(int i = 0; i < 2*N; i++){
        newBelt[(i + T) % (2*N)] = belt[i];
    }

    
    for(int i = 0; i < N; i++){
        cout << newBelt[i] << (i+1 < N ? ' ' : '\n');
    }
    for(int i = N; i < 2*N; i++){
        cout << newBelt[i] << (i+1 < 2*N ? ' ' : '\n');
    }

    return 0;
}
