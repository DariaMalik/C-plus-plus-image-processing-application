#include <stdio.h>

int main (void)
{
	int n = 10 , p = 5, q=10, r ;

	r = ( n == (p = q) ) ;
	printf("\n n= %d p= %d q= %d r= %d \n", n, p ,q, r) ;

	n = ( p = (q =5) ) ;
	n += (p += q) ;
	printf("\n n= %d p= %d q= %d \n", n, p ,q) ;

	n = 5 ; p = 2 ;
	q = n++ > p || p++ != 3 ;
	printf("\n n= %d p= %d q= %d \n", n, p ,q) ;

	return 0;
}
