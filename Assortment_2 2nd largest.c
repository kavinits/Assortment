#include<stdio.h>

main()
{ 
    
	int a[100],i,n,first,second;
	printf("Enter Size of Array=");
	scanf("%d",&n);
    printf("Enter Array Values:\n");
    for(i=0;i<n;i++)
  {
  	printf("a[%d]=",i);
  	 scanf("%d",&a[i]);
  	
  }
  
   for(i=0;i<n;i++)
      
      if(a[i]>first)
   {
   	second=first;
   	first=a[i];
   }
      else if(a[i]>second && a[i]<first)
      {
      	second=a[i];
	  }
   	  printf("largest number in array=%d",first);
   	  printf("\nsecond largest number in array=%d",second);
   }

