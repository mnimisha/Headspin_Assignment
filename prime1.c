#include<stdio.h>
void main()
{
int u,l,i,j,flag;
// read the upper and lower limit
printf("enter the lower and upper limit\n");
scanf("%d%d",&l,&u);
//read each number in the range
printf("prime numbers\n");

for(i=l+1;i<u;++i)
     {
     flag =0;
     for(j=2;j<=i/2;j++)
          {
          if(i%j ==0)
              {
              flag=1;
              break;
              }

          }
//print the prime numbers
         
         if(flag ==0)
         printf("%d\n",i);

     }

}
