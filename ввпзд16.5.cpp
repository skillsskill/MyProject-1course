// https://github.com/skillsskill/MyProject-1course
// 5. Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров,
// а затем — элементы с четными номерами в порядке 
// убывания номеров

#include <iostream>
#include <iterator>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    const int n = 10;
    array<int,n> arr = {1,2,3,4,5,6,7,8,9,1};
    int i = 0;
    stable_partition(arr.begin(),arr.end(),[&i] (int n) {
        ++i;
        return !((i-1) % 2);
    });
    copy(arr.begin(),arr.end(),ostream_iterator<int>(cout," "));
}