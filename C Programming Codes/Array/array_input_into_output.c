#include<stdio.h>
int main()
{
    int a[10],i,j,n;

   printf("Please input the numbers");
   scanf("%d",&n);
  for(i=0;i<n;i++){
printf("Please input the values %d ",i);

scanf("%d",&a[i]);
 }

        printf("output:\n");
         // for(i=0;i<n;i++)
            printf("%d ",a[i]);


}
