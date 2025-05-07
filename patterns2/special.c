#include<stdio.h>
int main ()
{
  int n = 5;
  for (int row = 1; row <= n; row++)        // rows from 1-5
    {

      for (int col = 1; col <= row; col++)    // Increasing Triangle
        printf ("* ");

      for (int col = row; col < n; col++)    // Decreasing triangle 
        printf ("  ");    // printing spaces

      for (int col = row; col < n; col++)    // Decreasing triangle 
        printf ("  ");    // printing spaces

      for (int col = 1; col <= row; col++)    // Increasing Triangle
        printf ("* ");

      printf ("\n");
    }
  for (int row = 1; row <= n - 1; row++)    // rows from 6-9  
    {
      for (int col = row; col < n; col++)    // Decreasing triangle 
        printf ("* ");        

      for (int col = 1; col <= row; col++)    // Increasing Triangle
        printf ("  ");

      for (int col = 1; col <= row; col++)    // Increasing Triangle
        printf ("  ");

      for (int col = row; col < n; col++)    // Decreasing triangle 
        printf ("* ");        


      printf ("\n");
    }
  return 0;
}
