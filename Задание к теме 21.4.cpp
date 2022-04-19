// https://github.com/skillsskill/MyProject-1course
//4. Дана матрица размера M × N. В каждом ее столбце найти количество элементов, 
//        больших среднего арифметического всех элементов этого столбца

#include <iomanip>
#include <iostream>
using namespace std;
#define M 4
#define N 6
int main (void) {
    int i, k, a[M][N];
    srand(time(NULL));
    for (i = 0; i < M; i++) {
        for (k = 0; k < N; k++)
            cout << setw(6) << (a[i][k] = rand() %101 -50);
        cout << endl;
    }
    cout << endl;
    for (k = 0; k < N; k++) {  
        int sum = 0;
        for (i = 0; i < M; i++)
            sum += a[i][k];
        double avg = (double)sum / M;
        int count = 0;
        for (i = 0; i < M; i++)
            if (a[i][k] > avg)
                count++;
        cout << setw(6) << count;
    }
    cout << endl;
    return 0;
}