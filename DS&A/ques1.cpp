#include<stdio.h>
 int removeDuplicates(int arr[], int arr_size)
 {
   int i, j=0;
   printf("\n\nOLD : ");
   for(i = 0; i < arr_size; i++)
   {
      printf("[%d] ", arr[i]);
   }
   for (i = 1; i < arr_size; i++)
   {
     if (arr[i] != arr[j])
     {
       j++;
       arr[j] = arr[i];
     }
   }
   arr_size = (j + 1);
   printf("\nNEW : ");
   for(i = 0; i< arr_size; i++)
   {
      printf("[%d] ", arr[i]);
   }
   printf("\n");
   return(j + 1);
 }
