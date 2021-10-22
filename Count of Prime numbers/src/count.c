
#include "count.h"

void count(int l, int r)
{
	int i,n,flag,c;
	
	c = 0; 
	for(n = l;n<=r;++n){
		

		if(n==1)
			continue;
		
		flag = 0;
		for(i = 2;i<=sqrt(n);++i){

			if(n%i==0){
				flag=1;
				break;
			}
		}
		
		if(flag==0)
			++c;
			
	}
	
	printf("Number of Prime numbers between %d and %d are: %d\n",l,r,c);
	
}

