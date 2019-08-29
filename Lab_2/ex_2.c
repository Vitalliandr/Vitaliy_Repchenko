#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
 char a[100];
 gets(a);
 int i = strlen(a);
 for(; i>0; i--){
 	putchar(a[i-1]);
 }
 return 0;
}
