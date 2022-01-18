#include <stdio.h>
#include <string.h>
#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

char my_putstr(char* Ch){
    int length = strlen(Ch); 
     for (int i =0; i<length;i++){
     my_putchar(Ch[i]);
}
   
}

// int main(){
//    my_putstr("test\n");
//    return 0;
// }