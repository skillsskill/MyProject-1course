//https://github.com/skillsskill/MyProject-1course
// 3. Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, 
// второй равен B, а каждый последующий элемент равен сумме всех предыдущих

#include<iostream>
#include<cstdlib> 

using namespace std;
int main()
{   
    int a, b, n, r;
    cout << "Vvedite n: ";
    cin >> n;
    int aN[n];
    cout << "Vvedite a: ";
    cin >> a;
    cout << "Vvedite b: ";
    cin >> b;
    r=a+b;

    for (int i=0; i<n; i++)
    {
        if (i==0)
           aN[i]=a;
        else if (i==1)
           aN[i]=b;
        else if (i==2)
           aN[i]=r;
        else  
        {
           r+=r;
           aN[i]=r;
        }
        cout << aN[i] << " ";   
    } 
    cout << endl;             
    system("pause");
}