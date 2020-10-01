#include<bits/stdc++.h>
int main()
{
	int i, hole, A[100], value=0, n;
	printf( "Enter number of elements: ");
	scanf( "%d", &n);
	printf( "\nEnter the elements:\n" );
	for( i=0; i<n; i++)
	scanf( "%d", &A[i] );
	for( i=1; i<n; i++)
	{
		value = A[i];
		hole = i;
		while( hole > 0 && A[hole-1] > value )
		{
			A[hole] = A[hole-1];
			hole--;
		}
		A[hole] = value;
	}
	printf( "\nSorted Array is:\n" );
	for( i=0; i<n; i++)
	printf( "%d\n", A[i] );
	return 0;
}
//Best case: O(n)
//Worst case: O(n^2)
/*Element is removed(imaginary) from array and inserted on the left side(sorted subarray).
This is why it is known as Insertion Sort*/
