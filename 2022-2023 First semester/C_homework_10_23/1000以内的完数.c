#include <stdio.h>
int swy(int m)
{
	int store = 0;
	int z = 0;
	int r = 2;
	for(; r <= m; r++ )
	{
		z = m / r;
		if( m == z*r )
			store += z;
	}
	return store;
}
int main(void)
{
	int n = 1;
	int m =1;
	for(;n < 1000;n++)
	{
		m = n;
		m = swy(m);
		if( n == m)
			printf("%d\n",n);
	}
	return 0;
}