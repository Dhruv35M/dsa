#include <iostream>
using namespace std;

void print(int arr[4][4], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int diffDiagonals(int arr[4][4], int n) {
    int firstDiagonal = 0, secondDiagonal=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                firstDiagonal += arr[i][j];
            }
            if(i + j == n-1) {
                secondDiagonal += arr[i][j];
            }
        }
    }
    int res = abs(firstDiagonal - secondDiagonal);
    return res;
}

int main() {

    int matrix[4][4] = {
        {-1,1,-7,-8},
        {-10,-8,-5,-2},
        {0,9,7,-1},
        {4,4,-2,1},
    };

    int size = sizeof(matrix)/sizeof(matrix[0][0]);
    cout<<size;

    print(matrix, 4);
    cout<<diffDiagonals(matrix, 4);

    return 0;
}