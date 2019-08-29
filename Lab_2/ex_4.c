#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap (int *x, int *y){
     int z = *x;
     *x = *y;
     *y = z;
}

int main() {
 char str[100];
 printf("Write two integer variables: ");
 gets(str);
 int a, b;
 sscanf(str, "%d%d", &a, &b);
 swap(&a, &b);
 printf ("%d %d", a ,b ); 
 return 0;
}
