#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Matrix {
private:
    int mat[3][3];
    int n, m;

public:
    // Constructor
    Matrix(int n, int m) : n(n), m(m) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                mat[i][j] = rand() % 10; // Random numbers between 0 and 9
            }
        }
    }

    // Transpose
    Matrix transpose() {
        Matrix T(m, n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                T.mat[j][i] = mat[i][j];
            }
        }
        return T;
    }

    // Show
    void show() {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix addition
    Matrix operator+(const Matrix& rhs) {
        Matrix sum(n, m);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                sum.mat[i][j] = mat[i][j] + rhs.mat[i][j];
            }
        }
        return sum;
    }

    // Matrix multiplication
    Matrix operator*(const Matrix& rhs) {
        Matrix product(n, rhs.m);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < rhs.m; ++j) {
                product.mat[i][j] = 0;
                for (int k = 0; k < m; ++k) {
                    product.mat[i][j] += mat[i][k] * rhs.mat[k][j];
                }
            }
        }
        return product;
    }

    // Equality check
    bool operator==(const Matrix& rhs) {
        if (n != rhs.n || m != rhs.m) return false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] != rhs.mat[i][j]) return false;
            }
        }
        return true;
    }
};

// DO NOT TOUCH THE MAIN FUNCTION.
int main() {
    srand(static_cast<unsigned int>(time(NULL)));

    Matrix A(2, 3), B(2, 3), C(2, 3), AT(3, 2), BT(3, 2), D(3, 2), E(2, 2), F(2, 2);
    AT = A.transpose();
    BT = B.transpose();
    cout << "A" << endl;
    A.show();
    cout << "=========" << endl;
    cout << "B" << endl;
    B.show();
    cout << "=========" << endl;
    cout << endl << "A " << (A == B ? "==" : "!=") << " B" << endl << endl << endl;

    C = A + B;
    cout << "C = A + B" << endl;
    C.show();
    cout << "=========" << endl;
    D = AT + BT;
    cout << "D = AT + BT" << endl;
    D.show();
    cout << endl << "C " << (C == D.transpose() ? "==" : "!=") << " Transpose of D" << endl << endl << endl;

    E = A * BT;
    cout << "E = A * BT" << endl;
    E.show();
    cout << "=========" << endl;
    F = B * AT;
    cout << "F = B * AT" << endl;
    F.show();
    cout << endl << "E " << (E == F.transpose() ? "==" : "!=") << " Transpose of F" << endl << endl << endl;

    return 0;
}
