#include<stdio.h>
int main()
{

int arr[15],size,pos,i,j,val;
printf("size of array\n");
scanf("%d",&size);
printf("enter the numbers\n");
for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
printf("pos and value\n");
scanf("%d%d",&pos,&val);
printf("after the insertion\n");

for(j=size-1;j>=pos;j--)
        {
         arr[j+1] = arr[j];
     

         }
        //j++;
       arr[pos] = val;

   for(i=0;i<size+1;i++)
      printf("%d\n",arr[i]);

return 0;
}
