//
// Created by PC on 9/23/2025.
//

#include <iostream>
using namespace std;

int main() {
    int matrixA[3][3], max = matrixA[0][0], I_Num = 0, J_Num = 0;

    // Asking user to enter the matrix numbers
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Please enter a number " << i << " of " << j << " : " << endl;
            cin >> matrixA[i][j];
        }
    }

    // Printing the matrix before the answer
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Finding the max number in the matrix and save the number and location of that
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrixA[i][j] > max) {
                max = matrixA[i][j];
                I_Num = i;
                J_Num = j;
            }
        }
    }

    // Printing the max number in the matrix and position of it
    cout << "Please enter element at row " << I_Num+1 << ", column " << J_Num+1 << ": ";

    return 0;
}