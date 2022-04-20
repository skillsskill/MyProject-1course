//  https://github.com/skillsskill/MyProject-1course
//1. Дано целое число N (> 0). Сформировать и вывести целочисленный 
// массив размера N, содержащий N первых 
// положительных нечетных чисел: 1, 3, 5, . . . .

#include <stdio.h>
int main()
{
    int mlen = 4;       
    int a[mlen];        
    int i;              
    printf("Пожалуйста, введите %i целых числа.\n", mlen)
    for(i=0; i<mlen; i++)
    {
        printf("Введите %d-е число: ", i+1);  
        scanf("%i", &a[i]);
    }
    for(i=mlen; i>0; i--)
    {
        printf("%i ", a[i-1]);
    }
    printf("\n");
    return 0;
}