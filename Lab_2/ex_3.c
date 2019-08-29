#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
 char a[100];
 gets(a);
 int n;
 sscanf(a, "%d", &n);
 int count = 1, n_star = 2*n-1, i = 0;
 for( ;i<n; i++){
 	int j = 0;
 	for ( ;j<n_star; j++)	
		if((j<((n_star-count)/2)) || (j+1>((n_star-count)/2+count)))
			printf("  ");
		else
			printf("* ");
 	count += 2;
 	if (i+1 != n)
 		printf("\n\n");
 }
 return 0;
}
