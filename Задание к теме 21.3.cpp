// https://github.com/skillsskill/MyProject-1course
//3. Дана матрица размера M × N. Найти номер ее столбца 
//  с наименьшим произведением элементов и вывести данный номер, а также значение наименьшего произведения.

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
long columnMul(int **arr, int rows, int column_index){
    long mul = 1;
    for ( int i = 0; i < rows; ++i )
        mul *= arr[i][column_index];
    return mul;
}
int main(){
    int rows, columns, i, j; // M & N
    std::cout << "Rows in matrix: ";
    std::cin >> rows;
    std::cout << "Columns in matrix: ";
    std::cin >> columns;
    int **matr = new int* [ rows ];
    for ( i = 0; i < rows; ++i )
        matr[i] = new int [ columns ];
        
    srand(time(NULL));
    for ( i = 0; i < rows; ++i )
        for ( j = 0; j < columns; ++j )
            matr[i][j] = rand() % 10 + 1;
    std::cout << "Values in matrix:" << std::endl;
    for ( i = 0; i < rows; ++i ){
        for ( j = 0; j < columns; ++j )
            std::cout << std::setw(3) << std::right << matr[i][j];
        std::cout << std::endl;
    }
    std::vector<long> muls;
    for ( j = 0; j < columns; ++j )
        muls.push_back(columnMul(matr, rows, j));
    std::vector<long>::iterator m = std::min_element(muls.begin(), muls.end());
    std::cout << "Column with minimum multiply have index " << std::distance(muls.begin(), m)
        << " starts by zero" << std::endl;
    std::cout << "Multiply of this column is " << *m << std::endl;
    for ( i = 0; i < rows; ++i )
        delete [] matr[i];
    delete [] matr;
    return 0;
}