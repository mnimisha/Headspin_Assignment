#include <stdio.h>
int main() 
{
	int n,j,sum;
           printf("enter the size of array\n");		
	    scanf("%d",&n);
	     int arr[n];
	    int i;
	    
	    sum =n*(n+1)/2;
           printf("enter the nos in the array\n");
	  
	    for(i=1;i<n;i++)
	        scanf("%d",&arr[i]);
	    for(i=1;i<n;i++)
	    {
	        sum =sum - arr[i];
	    }
	    
           printf("missing number is\n");
	    printf("%d\n",sum);
	    
	
	return 0;
}
