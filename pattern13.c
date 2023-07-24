#include <stdio.h>
int main() {
    int i,j,k;

    
    for ( i=3; i>0; i--) 
	{
        for ( j=1; j<i; j++)
		{
            printf("#");
        }
        
        for ( k=0; k<(4- i); k++)
		{
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
;
