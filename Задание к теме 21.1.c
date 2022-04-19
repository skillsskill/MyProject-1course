
//1. Дана квадратная матрица A порядка M (M — нечетное число). Начиная с элемента A1,1 и перемещаясь против часовой стрелки, 
//  вывести все ее элементы по спирали: первый столбец, последняя строка, последний столбец в обратном порядке, первая 
//  строка в обратном порядке, оставшиеся элементы второго столбца и т. д.;
// последним выводится центральный элемент матрицы.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void spiral(int **mass,int q,int e);
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0 ,j=0,q,e;
    int **arr=NULL;
    printf("массив:");
    scanf("%d",&q);
    arr=(int**) malloc(q*sizeof(int*));
    if(arr==NULL){
        puts("ошибка памяти");
        return  0;
    }
    for(i=0;i<q;i++){
    arr[i]=(int*) malloc(q*sizeof(int));
    if(arr[i]==NULL){
    puts("ошибка памяти");
    for(i=0;i<q;i++)
    free(arr[i]);
    free(arr);
    return  0;  
    }
}
    for(i = 0; i < q; i++)
    {
        for(j = 0; j < q; j++)
        {
            arr[i][j] = rand()%10+1;
            printf("%3d", arr[i][j]);
        }
        printf("\n\n");
    }
    e=q;
    spiral(arr, q, e);
    for (j=0;j<q;j++)
      free (arr[j]);
      free (arr);  
    return 0;
}
void spiral(int **mass,int q,int e){
    int  z = 0, k = 0;
    int i = 0 ,j=0,n,l,w;
    i=j=w=l=q-1;
   for(n=0;n<q*q;n++){
    printf("%3d", mass[i][j]);
    if ((i==(w))&&(j==l-1)) {w--;l--;z++;k++;puts("");} 
    if ((j==w)&&(i>z)) {i--;continue;} 
    if ((j>=0)&&(i==w)) {j++;continue;} 
    if ((j==k)&&(i>=0)) {i++;continue;} 
    if ((j<=w)&&(i==z)) {j--;continue;} 
}
}