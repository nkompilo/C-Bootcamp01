#include <stdio.h>
#include <stdlib.h>

void my_initializer(int* variable_a){
 *variable_a = 0; 
}

// int main(){
//     int variable_a = 19;

//     printf("%d\n", variable_a);
//     my_initializer(&variable_a);
//     printf("%d\n", variable_a);
//   return 0;
// }