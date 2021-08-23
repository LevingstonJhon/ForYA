#include <cstring>
#include <iostream>
using namespace std;

void swap_min(int* m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
    int min_rows = 0;
    int* m1 = 0;
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            if (min > m[i][j]) {
                min = m[i][j];
                m1 = m[i];
                min_rows = i;
            }
        }
    }
    if (m1 != m[0]) {
        m[min_rows] = m[0];
        m[0] = m1;
        m1 = 0;
    }
}



int main() {
    int ** m = new int* [3];
    m[0]= new int [3*4];
    for (size_t i = 0; i != 3; ++i) {
        if (i > 0) m[i] = m[i - 1] + 4;
        for (size_t j = 0; j != 4; ++j) {
            m[i][j] = int(rand() % 10);
            cout << m[i][j]<<' ';
        }
        cout << endl;
    }
    swap_min(m, 3, 4);
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j <4; ++j) {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }
}



/*
cout << __cplusplus;

*/