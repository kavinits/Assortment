#include<stdio.h>

main()
{ 
    int i,n,a[100];
	printf("Enter Size of Array=");
	scanf("%d",&n);
  printf("Enter elements in array:\n");
  for(i=0;i<n;i++)
  {
  	 
  	 scanf("%d",&a[i]);
  }
  printf("Negative elements in array:");
   for(i=0;i<n;i++)
   {
   	if(a[i]<0)
   	{
   		printf("%d\t",a[i]);
	}
   	  
   }
}
