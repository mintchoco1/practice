#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int max_val, min_val;
    srand(time(NULL));

    vector<vector<int>> mat(9, vector<int>(9));
    
    // 9x9 행렬에 랜덤 값 할당 (0~99 사이의 정수)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    max_val = mat[0][0];
    min_val = mat[0][0];

    // 행렬 출력 (9x9 형태로 출력)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;  // 각 행이 끝날 때 줄바꿈
    }

    // 최대값과 최소값 찾기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max_val < mat[i][j]) {
                max_val = mat[i][j];
            }
            if (min_val > mat[i][j]) {
                min_val = mat[i][j];
            }
        }
    }

    // 최대값과 최소값 출력
    cout << "Max value: " << max_val << endl;
    cout << "Min value: " << min_val << endl;
    
    return 0;
}
