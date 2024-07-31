//LEETCODE[Matrix Diagonal Sum]
#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += mat[i][i];
        if (i != n - 1 - i) {
            sum += mat[i][n - 1 - i];
        }
    }
    
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    int result = diagonalSum(mat);
    cout << "Sum of matrix diagonals: " << result << endl;

    return 0;
}
