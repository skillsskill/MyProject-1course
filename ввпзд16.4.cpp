// https://github.com/skillsskill/MyProject-1course
// 4. Дан массив A размера N. Вывести его элементы 
// в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,

#include <iostream>
using namespace std;
#define N 5
int A[N], s, L, R;
 
int main()
{
    for(s = 0; s < N; s++)
    {
        cout << "Ввод " << s+1 << " массив ";
        cin >> A[s];
    }
    cout << "\nмассив А\n";
    for(s = 0; s < N; s++)
        cout << A[s] << ' ';

    L = 0;
    R = N-1;
    cout << '\n';
    while(L <= R)
    {
        cout << A[L];
        if(L == R)
            break;
        cout << A[R];
        L++;
        R--;
    }
    return 0;
}