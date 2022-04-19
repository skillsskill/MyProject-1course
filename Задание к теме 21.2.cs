// https://github.com/skillsskill/MyProject-1course
// 2. Дана матрица размера M × N и целое число 
//    K (1 ≤ K ≤ M). Найти сумму и произведение элементов K-й строки данной матрицы.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
 
namespace ConsoleApplication1
{
    class Program
    {
   static void Main(string[] args)
   {
       int i, j, m, n,k,Sum=0,A=1;
      Random x = new Random();
       Console.WriteLine("m=");
      m = Convert.ToInt32(Console.ReadLine());
       Console.WriteLine("n=");
      n = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine();
      int[,] a = new int[m, n];
      for (i = 0; i < m; i++)
      {
           for (j = 0; j < n; j++)
          {
              a[i, j] = x.Next(0, 5);
          }
     }
 
     for (i = 0; i < m; i++)
     {
         for (j = 0; j < n; j++)
         {
              Console.Write(a[i, j] + "   ");
         }
          Console.WriteLine();
      }
      Console.WriteLine("vvedite K");

          k = Convert.ToInt32(Console.ReadLine());
 
       for (i = 0; i < m; i++)
            
         for (j =0; j<n; j++)
                
         if (i == (k-1))
          { Sum += a[i, j];
              A*=a[i,j]; }
      Console.WriteLine("Sum= "+Sum+" \n proizvedenie ="+A);
  Console.ReadKey();
        }
    }
    }