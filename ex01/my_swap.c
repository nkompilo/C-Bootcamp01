#include <stdio.h>
#include <stdlib.h>

void my_swap(int* a, int* b){
    int c;
     c =  *a;
    *a =  *b;
    *b =   c;

}

// int main() {
//   int a = 12;
//   int b = 21;
//   int c = 12;

//   printf("A - %d ** B - %d\n", a, b); // will print A - 12 ** B - 21
//   my_swap(&a, &b);
//   printf("A - %d ** B - %d\n", a, b); // will print A - 21 ** B - 12
//   return 0;
// }