#include <stdlib.h>
#include <stdio.h>

int function(int x)
{
 
	int a;
	if(x>0)
{
	x=function(x-2);
}	
else
	return x;
	
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}

