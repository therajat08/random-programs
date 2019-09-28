#include <stdio.h>

int main()
{
   int arr[100][100];
   int sum[100];
   int rows, colums;
   int max,maxIndex;
   int i,j;
   printf("enter number of rows\n");
   scanf("%d",&rows);

   printf("enter number of columns\n");
   scanf("%d",&colums);

   for(i=0;i<rows;i++)
   {
       for(j=0;j<colums;j++)
       {
           scanf("%d",&arr[i][j]);
       }
       printf("End of row %d\n",i+1);
   }

   for(i=0;i<rows;i++)
   {
       for(j=0;j<colums;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
   for(i=0;i<rows;i++)
   {
       for(j=0;j<colums;j++)
       {
           sum[i]+=arr[i][j];

       }
       printf("\n");
   }
   max = sum[0];
   for(i=0;i<rows;i++)
   {
       if(max<sum[i])
       {
           max = sum[i];
           maxIndex=i+1;
       }
   }
   printf("max sum is %d in row %d",max,maxIndex);
    return 0;
}
