// swap by call by value

#include <stdio.h>

void swap(int a, int b) {
   int temp = a;
   a = b;
   b = temp;
}

int main() {
   int x = 10, y = 20;
   
   printf("Before swap:\n");
   printf("x = %d, y = %d\n", x, y);
   
   swap(x, y);
   
   printf("\nAfter swap:\n"); 
   printf("x = %d, y = %d\n", x, y);
   
   return 0;
}