#include <stdio.h>
int main ()
{
int i = 0;
int nmillions;
/*do forever (for(;;))*/
/*comment*/
for (;;)		
{
	if 
		((i%1000000) == 0){
			nmillions = i/1000000;
			printf("Now at %d million \n",nmillions);
				}
			i++;
}			
}

