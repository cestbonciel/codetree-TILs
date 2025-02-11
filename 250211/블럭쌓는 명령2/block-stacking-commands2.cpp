#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int count[1001] = {0}; 

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }


    for (int i = 0; i < K; i++) {
        for (int j = A[i]; j <= B[i]; j++) {
            count[j]++;
        }
    }


    int max_cleaned = 0;
    for (int i = 0; i <= N; i++) { 
        if (count[i] > max_cleaned) {
            max_cleaned = count[i];
        }
    }

    cout << max_cleaned << endl; 

    return 0;
}
